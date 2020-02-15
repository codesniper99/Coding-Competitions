//SOOOLVED

#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

      ll abc[701][701];
int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;

      for(ll i=0;i<n;i++)
      {
          for(ll j=0;j<n;j++)
            cin>>abc[i][j];
      }
      int none=1;
      ll maxsum=0;
      ll maxi=abc[n-1][0];
      ll prevmaxi;int flag=0;
      for(ll i=n-1;i>=0;i--)
      {
          flag=0;

              maxi=-99;

          for(ll j=0;j<n;j++)
          {
              if(i == n-1)
              {
                prevmaxi =1000000001;
              }


              if(abc[i][j]>maxi && abc[i][j]<prevmaxi)
              {
                  maxi=abc[i][j];
                  none=0;
              }

          }

         // cout<<"\nnone - "<<none<<"  prevmaxi - "<<prevmaxi<<" maxi - "<<maxi<<'\n';
          if(none ||maxi<0)
            {
                none=1;
                break;

            }

            prevmaxi=maxi;

          maxsum+=maxi;
      }
if(none)
    cout<<"-1\n";

          else
cout<<maxsum<<'\n';



    }

    return 0;
}
