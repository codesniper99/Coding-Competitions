#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;
ll getClosest(ll, ll, ll);

ll findClosest(vector <ll> arr, ll n, ll target)
{
    if (target <= arr[0])
        return arr[0];
    if (target >= arr[n - 1])
        return arr[n - 1];

    ll i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;

        if (arr[mid] == target)
            return arr[mid];

       if (target < arr[mid]) {

            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],
                                  arr[mid], target);
     j = mid;
        }

        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],
                                  arr[mid + 1], target);
            i = mid + 1;
        }
    }

    return arr[mid];
}

ll getClosest(ll val1, ll val2,
               ll target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}




int main()
{
    ios::sync_with_stdio(0);
    ll t;
     cin>>t;
     while(t--){

        ll n,m;
        cin>>n>>m;
        vector<ll>l(n);
        map<ll,ll> indi;
        vector<ll>r(n);
        vector<ll>p(m);
        ll maxi=-99;

        for(ll i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
            indi[l[i]]=r[i];

            if(r[i]>=maxi)
             maxi=r[i];
        }
        for(ll i=0;i<m;i++)
        {

            cin>>p[i];
        }

        sort(l.begin(),l.end());

        sort(r.begin(),r.end());




        for(ll i=0;i<m;i++)
        {

        if(p[i]>=maxi)
                {
                    cout<<"-1\n";
                    continue;
                }

            for(ll j=0;j<n;j++)
            {
                if(p[i]>=l[j] && p[i]<r[j])
                {cout<<"0\n";continue;}
                else if(p[i] >=r[j] && p[i]<l[j+1])
                {
                    cout<<l[j+1]-p[i]<<'\n';
                    continue;
                }
            }
    /*
    //cout<<"here\n";
            ll closest = findClosest(l,n,p[i]);

            if(p[i]>=closest && p[i]<indi[closest] )
                cout<<"0\n";

            else if(p[i]>=closest && p[i]>=indi[closest])
                {
                    ll x=0;
                    for(ll j=0;j<n;j++)
                    {
                        if(l[j]==closest)
                            x=j+1;
                    }
                    cout<<l[x]-p[i]<<'\n';
                }
        else if(p[i]<=closest)
        {
            cout<<closest-p[i]<<'\n';
        }

     }*/



     }
}
    return 0;


}

