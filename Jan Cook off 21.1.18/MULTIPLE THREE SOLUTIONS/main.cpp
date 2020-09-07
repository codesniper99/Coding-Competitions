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
      d6=16*(d2)%10;

      if(k<=6)
      {
          ll sum=d0+d1+d2;
          // 7+5+2+4+8+6
          //7+5+2  + 4
          // 7+5+3+4+  8

          for(int i=4;i<=k;i++)
              {ll x=((pow(2,i-3)*d2));
              sum+=x%10;
              }
         // cout<<d0<<d1<<d2<<d3<<d4<<d5<<d6<<' '<<sum<<'\n';

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
          ll sum=d0+d1+d2+d3+d4+d5+d6;

        if(d6==2)
        {
          sum+=4+8+6;
          sum+=((k-8)/4)*20;
          ll x=((k-8)%4);
          if(x==0)
            sum+=0;
          else if(x==1)
            sum+=2;
          else if(x==2)
            sum+=6;
          else
            sum+=14;

          if(sum%3==0)
          {
              cout<<"YES\n";
          }
          else
          {
              cout<<"NO\n";
          }

        }
      else   if(d6==4)
        {
            sum+=14;
          sum+=((k-9)/4)*20;
          ll x=((k-9)%4);
          if(x==0)
            sum+=0;
          else if(x==1)
            sum+=2;
          else if(x==2)
            sum+=6;
          else
            sum+=14;

          if(sum%3==0)
          {
              cout<<"YES\n";
          }
          else
          {
              cout<<"NO\n";
          }

        }

      else   if(d6==8)
        {
            sum+=6;
          sum+=((k-10)/4)*20;
          ll x=((k-10)%4);
          if(x==0)
            sum+=0;
          else if(x==1)
            sum+=2;
          else if(x==2)
            sum+=6;
          else
            sum+=14;

          if(sum%3==0)
          {
              cout<<"YES\n";
          }
          else
          {
              cout<<"NO\n";
          }

        }

      else   if(d6==6)
        {

          sum+=((k-7)/4)*20;
          ll x=((k-7)%4);
          if(x==0)
            sum+=0;
          else if(x==1)
            sum+=2;
          else if(x==2)
            sum+=6;
          else
            sum+=14;

          if(sum%3==0)
          {
              cout<<"YES\n";
          }
          else
          {
              cout<<"NO\n";
          }
    }

      }


    }


    return 0;
}
