//Solved :Dddddddddddddddddd
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
    ll arr[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
    vector<ll> semis;
    while(t--)
    {
        map<ll,ll> semiprimes;
        ll n;
        cin>>n;
//46 length
        for(ll i=0;i<46;i++)
        {

            for(ll j=0;j<46;j++)

            {
                if(i==j)
                    continue;
                else
                {
                    ll x;
                    x=arr[i]*arr[j];
                    if(x>200)
                        break;
                    semis.push_back(x);
                    semiprimes[x]=1;
                }
            }
        }
        ll flag=0;
        ll r;

        ll len=semis.size();
        for(r=0;r<len;r++)
        {

            if(semiprimes[semis[r]] == 1)
                if(semiprimes[n-semis[r]]==1)
                  {
                      flag=1;
                      break;
                  }

      //  cout<<semis[r]<<" ";


        }

   if(flag==1)
    cout<<"YES\n";
   else
    cout<<"NO\n";

    }

    return 0;
}
