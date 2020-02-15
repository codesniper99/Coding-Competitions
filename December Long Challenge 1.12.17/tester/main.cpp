#include<bits/stdc++.h>
#define ll long long int
using namespace std;

inline ll scan_f( ll *location)
{   register ll digit;
    register ll result = 0;
    while( (digit = getchar()) >= '0')
    result = (result << 3) + (result << 1) + digit - '0';
    *location = result;
    return 0;
}

int main()
{  ios::sync_with_stdio(false);
   ll t;
   scan_f(&t);
   ll even,odd,x,digit;
   while(t--)
   {
       register ll i;
       ll n;
       scan_f(&n);
       register ll sum = 0;
       for( i=1;i<=n;i++)
       {
           even=0;odd=0;digit=0;
           x=i+1;
    while(x)
    {
     digit=x%10;

    if(digit%2==1)
        odd+=digit;
    else
        even+=digit;
        x=x/10;
    }
      sum+=abs(even-odd)*i;

        }


      for( i=2;i<=n;i++)
      {
            even=0;odd=0; digit=0;
            x=n+i;
    while(x)
    {
          digit=x%10;

       if(digit%2==1)
          odd+=digit;
       else
          even+=digit;
          x=x/10;
    }
         sum+=abs(even-odd)*(n-i+1);
      }


     cout<<sum<<'\n';
   }
    return 0;
}
