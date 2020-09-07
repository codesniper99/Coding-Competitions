#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#define comp 0.000001
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
cout<<comp;
//double g=-10000000000.12432;
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

         //left to right
         if(directions[i]==1)
         {

            // coordinates of car. left and right at any time

             double left_coordinate =(positions[i]-lengths[i])+velocities[i]*(total_time);
             double right_coordinate =(positions[i]          )+velocities[i]*(total_time);

             // case 1 not hitting
             if(left_coordinate>=comp && right_coordinate>=comp)
             {
                 total_time+=time_to_cross_lane;
                 continue;
             }
             //case 2
             else if(left_coordinate<=-comp && right_coordinate>=0)
             {
                 total_time+=(double(-left_coordinate)/double(velocities[i])) + time_to_cross_lane;
                 continue;
             }
             //case 3
             else if(left_coordinate<=-comp && right_coordinate<=-comp)
             {
                 double time_to_reach_for_car=(double(-right_coordinate)/double(velocities[i]));
                 double time_to_cross_length = double(lengths[i])/double(velocities[i]);
                // if car reaches before chef would cross the lane
                 if( time_to_cross_lane-time_to_reach_for_car>=0)
                 {

                    total_time+=time_to_reach_for_car+time_to_cross_length+time_to_cross_lane;
                 }
                 else
                      total_time+=time_to_cross_lane;

             }
             // if a coordinate is zero
             else if( left_coordinate==comp|| right_coordinate ==comp )
             {
                 if(left_coordinate==comp)
                {
                    total_time+=time_to_cross_lane;
                }
                else if(right_coordinate==comp)
                {
                    total_time+=time_to_cross_lane+(double(lengths[i])/double(velocities[i]));
                }


             }
             else
                total_time+=time_to_cross_lane;



         }
         //right to left
         else if(directions[i]==0)
         {

             double left_coordinate =(positions[i])-(velocities[i]*total_time);
             double right_coordinate =(positions[i]+lengths[i])-(velocities[i]*total_time);

             // case 1 not hitting
             if(left_coordinate<=-comp && right_coordinate<=-comp)
             {
                 total_time+=(time_to_cross_lane);
             }
             else if(left_coordinate<=-comp && right_coordinate>=0)
             {
                 total_time+=(double(right_coordinate)/double(velocities[i]) + time_to_cross_lane);

             }

             else if(left_coordinate>=0 && right_coordinate>=0)
             {

                 double time_to_reach_for_car=(double(left_coordinate)/double(velocities[i]));
                 double time_to_pass =(time_to_reach_for_car+( double(lengths[i])/double(velocities[i])));

                 //car would reach before chef would cross lane
                 if( time_to_cross_lane- time_to_reach_for_car>=0)
                 {
                     total_time+=(time_to_pass+time_to_cross_lane);
                 }
                 else
                  total_time+=(time_to_cross_lane);

              }
              //coordinate is zero
             else if(left_coordinate==comp||right_coordinate==comp)
             {
                if(left_coordinate==comp)
                {
                    total_time+=(time_to_cross_lane+( double(lengths[i])/double(velocities[i])));
                }
                else if(right_coordinate==comp)
                {
                    total_time+=(time_to_cross_lane);
                }

             }



         }
      }
   cout<<fixed<<setprecision(12)<<total_time<<'\n';


   }

    return 0;
}
