#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define li long int

using namespace std;

ll nCrModpDP(ll n, ll r, ll p)
{
    ll C[r+1];
    memset(C, 0, sizeof(C));

    C[0] = 1;

     for (ll i = 1; i <= n; i++)
    {
       for (ll j = min(i, r); j > 0; j--)
       C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}

ll nCrModpLucas(ll n, ll r, ll p)
{
   if (r==0)
      return 1;
   ll ni = n%p, ri = r%p;

   return (nCrModpLucas(n/p, r/p, p) *nCrModpDP(ni, ri, p)) % p;
}


int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>s(n);

        for(ll i=0;i<n;i++)
            {
             //   cout<<random(10);
               cin>>s[i];
           // s[i]=rand()%800+1;
          //  srand(time(0));
            }


        sort(s.begin(),s.end());
        vector<pair<ll,ll> > permu;

        ll key=s[0];
        ll counter=0;

        for(ll i=0;i<n;i++)
        {
           // cout<<s[i]<< ' '<<key<<'\n';
            if(s[i]!=key)
            {
                permu.push_back(make_pair(key,counter));
                counter=1;
                key=s[i];
            }
            else{
                counter++;

            }
            if(i==n-1)
            {
                permu.push_back(make_pair(key,counter));

            }
        }
        ll answer=1;
        ll len= permu.size();
        for(ll i=len-1;i>=0;i--)
        {
            ll factor=1;

           // cout<<"First :- "<<permu[i].first<<"   Second :- "<<permu[i].second<<'\n';
            if(permu[i].second%2==0)// even number
            {
                for(ll j=1;j<permu[i].second ;j+=2)
                {
                    factor=(factor%mod)*((permu[i].second-j)%mod);
                    // cout<<factor<<'\n';
                }

            }
            else//take one from next
            {
                //cout<<"oDD\n";
                for(ll j=1;j<permu[i].second ;j+=2)
                {
                    factor=(factor%mod)*((permu[i].second-j)%mod);
                 //    cout<<factor<<'\n';
                }
                factor*=permu[i-1].second;
                permu[i-1].second--;//     cout<<factor<<'\n';

            }
            answer=(answer%mod)*(factor%mod);

        }

    cout<<answer%mod<<'\n';
    }
    return 0;
}
