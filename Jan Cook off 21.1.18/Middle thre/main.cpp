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
      ll k,d1,d0;
      cin>>k>>d0>>d1;

      ll d2;
      d2=(d1+d0)%10;

      ll d3,d4,d5,d6;
      d3=2*(d2)%10;
      d4=4*(d2)%10;
      d5=8*(d2)%10;
      d6=(16*(d2))%10;

      if(k<=6)
      {
          ll sum=d0+d1+d2;

         for(int i=4;i<=k;i++)
              {ll x=((pow(2,i-3)*d2));
              sum+=x%10;
              }
         if(sum%3==0)
          {
              cout<<"YES\n";
              continue;
          }
          else
          {
              cout<<"NO\n";
              continue;
          }
      }
      else
      {
          ll sum;
          sum=d0+d1+d2;

          ll p;

          if(d3==2)
            p=3;

          else if(d4==2)
            {
              sum+=d3;
              p=4;
            }

          else if(d5==2)
            {
                sum+=6;
                p=5;
            }
          else
            {
                sum+=14;
                p=6;
            }


          ll X=floor((k-p)/4);

         sum+=X*20;
         cout<<d0<<d1<<d2<<d3<<d4<<d5<<d6;
         for(int i=0;i<X;i++)
         cout<<"2486";
         cout<<'\n';

 cout<<"sum - "<<sum<<" ";


              if(sum%3==0)
          {
              cout<<"YES\n";
              continue;
          }
          else
          {
              cout<<"NO\n";
              continue;
          }



      }


    }


    return 0;
}
