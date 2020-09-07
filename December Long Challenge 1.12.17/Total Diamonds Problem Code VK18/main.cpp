#include<bits/stdc++.h>
#define ll long long int
using namespace std;


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
{    ios::sync_with_stdio(false);
      cin.tie(NULL);
   ll t;
   scanf("%lld",&t);
   while(t--)
   {  register ll i;
       long long int n;
       scanf("%lld",&n);
       long long int roomno;
       long long int sum = 0;
       for(i=1;i<=n;i++)
       { roomno=i+1;
         if(i!=n)
           sum+=diamonds_in_room(roomno)*i+ diamonds_in_room(2*n+2-roomno)*i;
          if(i==n)
            sum+=diamonds_in_room(n+1)*n;

          }



       printf("%lld\n",sum);
   }
    return 0;
}
