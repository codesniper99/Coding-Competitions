#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 ll results[1000001];
 ll diamondsofrooms[2000002];

inline ll scan_f( ll *location)
{   register ll digit;
    register ll result = 0;
    while( (digit = getchar()) >= '0')
    result = (result << 3) + (result << 1) + digit - '0';
    *location = result;
    return 0;
}


int main()
{
   ios::sync_with_stdio(false);

   register ll t;
   scan_f(&t);

   memset(results,0,sizeof(results));
   memset(diamondsofrooms,0,sizeof(diamondsofrooms));
   ll even,odd,digit;
   register ll x;
   //t=1;
   //t=10;
   //ll n;
  for( ll i=1;i<=1000000;i++)
       {
           even=0;odd=0;digit=0;
           x=i+1;
           ll y;
           y=x;
    if(diamondsofrooms[x]==0)
    {while(x)
    {
     digit=x%10;
    if (digit%2==1)
      odd+=digit;
    else
      even+=digit;
    x=x/10;
    }
      diamondsofrooms[y]=abs(even-odd);
    }

 }
      for(ll i=2;i<=1000000;i++)
      {
    even=0;odd=0; digit=0;
    x=1000000+i;ll y=x;
    if(diamondsofrooms[x]==0)
    {
        while(x)
    {
    digit=x%10;
    if (digit%2==1)
      odd+=digit;
    else
      even+=digit;
    x=x/10;
    }
      diamondsofrooms[y]=abs(even-odd);
     }

      }

   while(t--)
   {

       register ll i;
       register ll n;
    scan_f(&n);

       if(results[n]!=0)
          {cout<<results[n]<<'\n';continue;}


       register ll sum = 0;
       for( i=1;i<=n;i++)
       {
           even=0;odd=0;digit=0;
           x=i+1;
        sum+=diamondsofrooms[x]*i;

       }
      for( i=2;i<=n;i++)
      {
    even=0;odd=0; digit=0;
    x=n+i;
        sum+=diamondsofrooms[x]*(n-i+1);

      }
     cout<<sum<<'\n';
     results[n]=sum;
   }
    return 0;
}
