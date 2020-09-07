#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll maxSubArraySum(vector <ll> a, ll sizee,ll k)
{

   register ll Max_Till_Now = LONG_LONG_MIN, Max_Ends_Here = 0;
  ll counter=0;
  ll left=0;ll right=0;
   for(ll i=0;i < sizee,counter!=k; i++)
    {

        Max_Ends_Here = Max_Ends_Here + a[i];

        if (Max_Till_Now < Max_Ends_Here)
            {
                Max_Till_Now = Max_Ends_Here;
                left=i;right=i;
            }
        if (Max_Ends_Here < 0)
            {
                Max_Ends_Here = 0;
                left=i+1;
            }
       if(i == sizee-1 && counter !=k)
         {
          i =-1;
          counter++;
         }

    }
    return Max_Till_Now;

}

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;

    while(t--)
    {
      ll n,k;
      cin >> n >> k;
      ll sizee = n * (k);

      vector<ll> a (n);

      for(ll i=0;i<n;i++)
            cin>>a[i];



        ll maxsum = maxSubArraySum(a,n,k);
        cout<<maxsum<<'\n';

    }
    return 0;
}
