//SOLVEDDDDD :D
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<algorithm>
#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll p,s;
    cin>>p>>s;

    ll tasks=p;
    vector < pair <ll,ll> >difficulty;
    while(tasks--)
    {
        vector<ll>scores(s);
        vector<ll>number(s);
        vector< pair <ll,ll> >subtasks;
        for(ll i=0;i<s;i++)
        {
            cin>>scores[i];
        }

        for(ll i=0;i<s;i++)
        {
            cin>>number[i];
        }
        for(ll i=0;i<s;i++)
        {
            subtasks.push_back(make_pair(scores[i],number[i]));
        }
        sort(subtasks.begin(),subtasks.end());

        ll diffi=0;
        for(ll i=0;i<s-1;i++)
        {
            if(subtasks[i].second > subtasks[i+1].second)
               diffi++;
        }
        difficulty.push_back(make_pair(diffi,p-tasks));

    }

    sort(difficulty.begin(),difficulty.end());
    for(ll i=0;i<p;i++)
    {
        cout<<difficulty[i].second<<'\n';
    }

    return 0;
}
