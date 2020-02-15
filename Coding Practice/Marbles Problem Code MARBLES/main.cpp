/*#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int
#define slf(n) scanf("%d",&n)

using namespace std;
long long noOfCombination(int n,int k){
int  i=0;
long long res=1;
if (k >n/2)
    k = n - k;
for(i = 0; i < k; i++)
    {res*= (n-i);
    res/= (i+1);
}
return res;
}

int main()
{
    int t,n,k;
    slf(t);
    while(t--)
    {
       slf(n);
       slf(k);

       cout<< noOfCombination(n-1,k-1)<<'\n';
    }
    return 0;
}
*/
#include <iostream>
#include<stdio.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);


    ll t;
    cin>>t;

    while(t--)
    {  ll n,q;
        cin>>n>>q;


        ll x;ll y;
        ll p=1;
        for(ll i=0;i<n;i++)
          {cin>>y;
           p*=y;
          }
        for(ll i=0; i<q; i++)
        { cin>>x;

          if(p>1000000000)
          {
              cout<<'0'<<'\n';
              continue;
          }
          else
            cout<<x/p<<'\n';
        }
    }
    return 0;
}
