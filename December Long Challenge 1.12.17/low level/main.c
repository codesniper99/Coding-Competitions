#include <stdlib.h>
#include<stdio.h>
#define ll long long int


inline ll diamonds_in_room(ll roomno)
{
    ll even=0;
    ll odd=0;ll digit=0;
    ll x=roomno;
    while(x)
    {
    digit=x%10;
    if(digit==0)
        ;
    else if(digit%2==0)
      even+=digit;
    else
        odd+=digit;
    x=x/10;
    }

    return abs(even-odd);

}


int main()
{
   ll t;
   scanf("%lld",&t);
   ll even,odd,x,digit;
   while(t--)
   {  ll i;
       long long int n;
       scanf("%lld",&n);
       long long int roomno;
       long long int sum = 0;
       for( i=1;i<n;i++)
       { roomno=i+1;
     /*      even=0;
      odd=0;digit=0;
    x=roomno;
    while(x)
    {
    digit=x%10;
    if(digit==0)
        ;
    else if(digit%2==0)
      even+=digit;
    else
        odd+=digit;
    x=x/10;
    }*/
           sum+=diamonds_in_room(roomno)*i;
          }
  /*  even=0;
    odd=0; digit=0;
    x=n+1;
    while(x)
    {
    digit=x%10;
    if(digit==0)
        ;
    else if(digit%2==0)
      even+=digit;
    else
        odd+=digit;
    x=x/10;
    }*/
         roomno=n+1;
           sum+=diamonds_in_room(roomno)*n;

      for( i=2;i<=n;i++)
      {    roomno=n+i;
           sum+=diamonds_in_room(roomno)*(n-i+1);
        }
       printf("%lld\n",sum);
    }
    return 0;
}
