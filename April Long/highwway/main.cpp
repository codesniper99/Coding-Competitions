#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
   {

//
//cout<<setprecision(16)<<g;
     ll n,s,y;
     cin>>n>>s>>y;

     double time_to_cross_lane=double(y)/double(s);
     vector<ll> velocities(n);
     vector<ll>directions(n);
     vector<ll>positions(n);
     vector<ll>lengths(n);

     for(ll i=0;i<n;i++)
     {

         cin>>velocities[i] ;
     }

     for(ll i=0;i<n;i++)
     {
         cin>>directions[i] ;
     }
     for(ll i=0;i<n;i++)
     {
         cin>>positions[i] ;
     }

     for(ll i=0;i<n;i++)
     {
         cin>>lengths[i] ;
     }

     double total_time=0.0;

     for(ll i=0;i<n;i++)
     {
double time_cycle=0.0;
         //left to right
         if(directions[i]==1)
         {


             double left_coordinate =(positions[i]-lengths[i]);
             double right_coordinate =(positions[i]);

             // case 1 not hitting
             if(left_coordinate>=0 && right_coordinate>=0)
             {
                 time_cycle=time_to_cross_lane;
           }
             //case 2
             else if(left_coordinate<=0 && right_coordinate>=0)
             {
                 time_cycle=(double(-left_coordinate)/double(velocities[i])) + time_to_cross_lane;
            }
             //case 3
             else if(left_coordinate<=0 && right_coordinate<=0)
             {
                 double time_to_reach_for_car=(double(-right_coordinate)/double(velocities[i]));
                 double time_to_cross_length = double(lengths[i])/double(velocities[i]);
                 if( time_to_reach_for_car<=time_to_cross_lane)
                 {

                    // cout<<"time to reach - "<<time_to_reach_for_car<<" pass - "<<time_to_pass;
                     time_cycle=time_to_reach_for_car+time_to_cross_length+time_to_cross_lane;
                 }
                 else
                      time_cycle=time_to_cross_lane;

             }
             //new got me 25pts
             else if( left_coordinate==0 || right_coordinate ==0 )
             {
                // cout<<"ayyaya";
                 if(left_coordinate==0)
                {
                    time_cycle=time_to_cross_lane;
                }
                else if(right_coordinate==0)
                {
                    time_cycle=time_to_cross_lane+(double(lengths[i])/double(velocities[i]));
                }


             }
             else
                time_cycle=time_to_cross_lane;



for(ll j=0;j<n;j++)

        {
        if(directions[j]==0)
            positions[j]=positions[j]-velocities[j]*time_cycle;
        else
            positions[j]=positions[j]+velocities[j]*time_cycle;

         }
        total_time+=time_cycle;
       // cout<<"k  " <<time_cycle<<" ";

         }
         //right to left
         else if(directions[i]==0)
         {


             double left_coordinate =(positions[i]);

             double right_coordinate =(positions[i]+lengths[i]);

             // case 1 not hitting
             if(left_coordinate<=0 && right_coordinate<=0)
             {
                 time_cycle=(time_to_cross_lane);
             }
             else if(left_coordinate<=0 && right_coordinate>=0)
             {
                 time_cycle=(double(right_coordinate)/double(velocities[i]) + time_to_cross_lane);

             }
             else if(left_coordinate>=0 && right_coordinate>=0)
             {


                 double time_to_reach_for_car=(double(left_coordinate)/double(velocities[i]));


                 double time_to_pass =(time_to_reach_for_car+(  double(lengths[i])/  double(velocities[i])));

                 if( time_to_reach_for_car<=time_to_cross_lane)
                 {
                  //   cout<<"time to reach - "<<time_to_reach_for_car<<" pass - "<<time_to_pass;
                      time_cycle=(time_to_pass+time_to_cross_lane);
                 }
                 else
                   time_cycle=(time_to_cross_lane);

              }
             else if(left_coordinate==0||right_coordinate==0)
             {
                if(left_coordinate==0)
                {
                     time_cycle=(time_to_cross_lane+( double(lengths[i])/double(velocities[i])));
                }
                else if(right_coordinate==0)
                {
                     time_cycle=(time_to_cross_lane);
                }

             }

for(ll j=0;j<n;j++)
        {
            if(directions[j]==0)
            positions[j]=positions[j]-velocities[j]*time_cycle;
        else
                    positions[j]=positions[j]+velocities[j]*time_cycle;

        }
        total_time+=time_cycle;
      //  cout<<"k  " <<time_cycle<<" ";
         }

     //    cout<<"P\n";
//for(ll j=0;j<n;j++)
  //  cout<<positions[j]<<" ";
//cout<<'\n';
      }
   cout<<fixed<<setprecision(12)<<total_time<<'\n';


   }

    return 0;
}
