#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 map<ll,ll>results;
 map<ll,ll>diamondsofrooms;

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
   register ll even,odd,digit;
   register ll x;
 results[1]=2;
 results[0]=0;
      while(t--)
   {   register ll i;
       register ll n;
       scan_f(&n);
       if(results.find(n)!=results.end())
        {cout<<results[n]<<'\n';continue;}
       register ll sum = 0;


       for( i=1;i<=n;i++)
       {  even=0;odd=0;digit=0;
           x=i+1;
           ll y=x;

    if(diamondsofrooms.find(x)==diamondsofrooms.end())
    {while(x)
    {
        digit=x%10;
      if (digit%2==1)
        odd+=digit;
      else
        even+=digit;
        x=x/10;
    }
      sum+= abs(even-odd)*i;
      diamondsofrooms[y]=abs(even-odd);
    }
    else
        sum+=diamondsofrooms[y]*i;
     }

      for( i=2;i<=n;i++)
      {
    even=0;odd=0; digit=0;
    x=n+i;ll y=x;
       if(diamondsofrooms.find(x)==diamondsofrooms.end())
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
       sum+=abs(even-odd)*(n-i+1);
       diamondsofrooms[y]=abs(even-odd);
    }
     else
        sum+=diamondsofrooms[y]*(n-i+1);
     }
     cout<<sum<<'\n';
     results[n]=sum;
   }

    return 0;
}
