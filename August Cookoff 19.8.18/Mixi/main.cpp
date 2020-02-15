#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];

        ll total=a[0];
        for(ll i=1;i<n;i++)
        {
            if(total > 0){
                if(i%2==1)
                {
                        total-=a[i];

                }
                else
                {
                    total+=a[i];
                }

            }

            else{
                if(i%2==1)
                {
                        total+=a[i];
                }
                else
                {
                    total-=a[i];
                }

            }

        }
        if(abs(total)>=k)
        {
            cout<<"1\n";


        }
        else
            cout<<"2\n";



    }

    return 0;
}
