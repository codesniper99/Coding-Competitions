#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(k);

    for(ll i=0;i<k;i++)
       cin>>a[i];
       ll mini=n;
       ll answer_type,answer_no;
    for(ll i=0;i<k;i++)
    {
        ll left= n%a[i];
ll x=n/a[i];
        if(left<mini && x!=0)
            {
                answer_type=i+1;
                answer_no=n/a[i];
                mini=left;
            }

    }
if(n==0)
    cout<<'1'<<" "<<'0';

else
                 cout<<answer_type<<" "<<answer_no;
    return 0;
}
