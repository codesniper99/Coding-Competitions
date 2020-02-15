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
        ll n,m;
        cin>>n>>m;
        int arr[n][m];
        vector<pair<ll,ll> > coordinates;
        for(ll i=0;i<n;i++)
        {
            string s;
            s.clear();
            cin>>s;

            for(ll j=0;j<m;j++)
            {
                arr[i][j]=s[j]-'0';
                if(arr[i][j]==1)
                coordinates.push_back(make_pair(i,j));
            }






        }

        ll len=coordinates.size();
        vector<ll>distances(n+m-1);
        distances.clear();
        for(ll i=0;i<n+m-1;i++)
            distances[i]=0;

       //  for(ll j=0;j<len;j++)
           // {
                //cout<<coordinates[j].first<<','<<coordinates[j].second<<'\n';

         //   }

            //for(ll i=0;i<len;i++)
          //  {
           //     for(ll j=i+1;j<len;j++)
            //    {

             //       ll distancee = abs(coordinates[i].first-coordinates[j].first) + abs(coordinates[i].second-coordinates[j].second);

             //       if(distancee>=1 && distancee<=n+m-2)
              //          distances[distancee]++;
//
         //       }



            }

            for(ll i=1;i<n+m-1;i++)
                cout<<distances[i]<<" ";
            cout<<'\n';

    }

    return 0;
}
