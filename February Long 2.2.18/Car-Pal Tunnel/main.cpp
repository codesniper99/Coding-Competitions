#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       vector<ll> a(n);
       for(ll i=0;i<n;i++)
            cin>>a[i];
       double c,d,s;
       cin>>c>>d>>s;


       double t1=0.0,t2=0.0;
       double time_between_tunnels = d/s;
//cout<<"time - "<<time_between_tunnels<<"  ";
       ll service_time;

       t1= (n-1)*time_between_tunnels;

       for(ll i=0;i<n;i++)
       {

         t1+=double(a[i]);

       }

       // T
     //  cout<<"\nARRAY\n";
  //     for(int i=0;i<n;i++)
    //    cout<<a[i]<<' ';
//cout<<"\n";
//cout<<"T1 - "<<t1<<'\n';
       t2=  2*a[0];
       //cout<< " starting t2 - "<<double(t2)<<"  ";
 double time_ahead=a[0];

       for(ll i=1;i<n;i++)
       {
          if(a[i]<=time_ahead)
           {
              ;
           }
           else if(a[i]>time_ahead)
           {

               time_ahead=a[i];
           }

       }



       cout<</*"t1 -  "<< t1<<"  t2 - "<<t2<<" Total answer - "<<*/double(double(c-1)*double(time_ahead))<<"\n";
    }


    return 0;
}
