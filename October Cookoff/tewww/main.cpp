#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string name;
        cin>>name;

        vector<pair<string,ll> >tops(n);

        for(ll i=0;i<n;i++)
        {
            cin>>tops[i].first;
            tops[i].second = 0;
        }
        ll valid_move = 1;
        ll to_find=2;

        if(name=="Dee")
            to_find = 0;
        else
            to_find = 1;

        while(valid_move)
        {
            for(ll i=0;i<n;i++)
            {
                string s = (tops[i].first);
                ll top = s[tops[i].second];
                ll bot = s[top[i].second+1];
                if(top == to_find && )
                {


                }


            }


        }


    }

    return 0;
}
