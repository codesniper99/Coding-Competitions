#include <iostream>
#define ll long long int
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{    ios::sync_with_stdio(false);
     cin.tie(NULL);
    ll n,q;
    scanf("%lld %lld",&n,&q);
    ll a[n+1];
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(ll w=0;w<q;w++)
    {
        int qtype;
        scanf("%d",&qtype);

    if(qtype==1)
    {
        ll i,x;
        scanf("%lld %lld",&i,&x);
        a[i-1]=x;

    }

    if(qtype==2)
    {
        ll i,k;
        scanf("%lld %lld",&i,&k);
        ll XOR=0;
        ll counter=0;
// A1 A2 A3 A4... Ai    An
      for(ll u=0;u<=i-1;u++)
      {

          XOR=XOR^a[u];
          if(XOR==k)
            counter++;
      }

        printf("%lld\n",counter);
    }
}

    return 0;
}
