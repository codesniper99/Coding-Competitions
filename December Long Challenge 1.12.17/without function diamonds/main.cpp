#include <iostream>
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
{  ios::sync_with_stdio(false);

   ll t;
  cin>>t;
   ll even,odd,x,digit;
   while(t--)
   {
       register ll i;
       ll n;
      cin>>n;
      ll diamonds[2*n+1];
      for(i=2;i<=2*n;i++)
      {
          cout<<diamonds_in_room(i)<<' ';
    }
   }
    return 0;
}
