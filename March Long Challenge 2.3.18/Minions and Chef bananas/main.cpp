//SOLVED USING BINARY SEARCH!!! :D
//AKHIL'S CODE
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll h;
        cin>>h;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
             cin>>a[i];
        sort(a.begin(),a.end());
        if(h==n)
            cout<<a[n-1]<<'\n';
        else
        {
            ll k;
            ll last=a[n-1];
            ll gif=0;
            ll left,right,mid;
            left=1;
            right=a[n-1];
            mid=(left+right)/2;
         while( left<=right  )
                {
                    mid=(left+right)/2;
                    k=mid;
                    gif=0;
                    for(ll j=n-1;j>=0;j--)
                    {
                        gif+=ceil((double)a[j]/(double)k);

                        if(gif>h)
                            break;
                    }
                        if(gif>h)
                            left=mid+1;
                        else if(gif<h)
                        {
                            last=k;
                            right=mid-1;
                        }
                        else if(gif==h)
                        {
                            last=k;
                            right=mid-1;
                        }
                }
                if(gif==h)
                    cout<<k<<'\n';
                else
                    cout<<last<<'\n';
            }
        }
    return 0;
}
