//SOOOOOOOLVED

#include<iostream>

#include<bits/stdc++.h>
// Akhils code
#define ll long long int
using namespace std;


ll f1(ll arr[], ll l, ll m, ll h)
{

    ll sum = 0;
    ll left_sum = LLONG_MIN;
    for (ll i = m; i >= l; i--)
    {
        sum = sum + arr[i];
        if (sum > left_sum)
          left_sum = sum;
    }

    sum = 0;
    ll right_sum = LLONG_MIN;
    for (ll i = m+1; i <= h; i++)
    {
        sum = sum + arr[i];
        if (sum > right_sum)
          right_sum = sum;
    }

    return left_sum + right_sum;
}
ll m(ll a[],ll l,ll h)
{
 if(l==h)
  return a[l];

 ll midd=(l+h)/2;
 return max(m(a,l,midd),max(m(a,midd+1,h),f1(a,l,midd,h)));
}
int main()
{
   ll t,n,k,i;
  cin>>t;
  while(t--)
  {
   cin>>n>>k;
  ll a[n];
   ll b[2*n];

   ll sum=0;
   for(i=0;i<n;i++)
   {
     cin>>a[i];
     b[i]=b[n+i]=a[i];
     sum+=a[i];
   }


  if(k>1)
   cout<<max(m(a,0,n-1),max(m(b,0,2*n-1),max(sum,max((k-1)*sum+m(a,0,n-1),(k-2)*sum+m(b,0,2*n-1)))))<<'\n';

   else
   cout<<m(a,0,n-1)<<'\n';
  }
  return 0;
}
