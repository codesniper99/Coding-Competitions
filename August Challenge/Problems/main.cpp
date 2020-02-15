#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<algorithm>
#define ll long long int
#define li long int

struct problems{
    ll score;
    ll number;

};
bool compareByscore(const problems &a, const problems &b)
{
    return a.score < b.score;
}
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll p,s;
    // vector<ll> arra(p);
    cin>>p>>s;
    vector<problems>arra;

    ll tasks=p;

    while(tasks--)
    {
        vector<ll>scores(s);
        vector<ll>number(s);
        map<ll,ll> prob;

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
            prob[scores[i]]=number[i];
        }

        ll x=0;

        vector <ll> sorted;
        for(map<ll,ll>::iterator i=prob.begin();i!=prob.end();i++)
        {

            sorted.push_back(i->second);

        }
        ll len=sorted.size();

        for(ll i=0;i<len-1;i++)
        {
            if(sorted[i]>sorted[i+1])
                x++;

        }

        ll number_of_prob=p-tasks;
        struct problems t;
        t.number=number_of_prob;
        t.score=x;
        //cout<<t.score<<'\n';
        arra.push_back(t);
    }
    std::sort(arra.begin(),arra.end(),compareByscore);
    ll len=arra.size();
    for(ll i=0;i<len;i++)
    {
      //  cout<<arra[i].score<<'\n';
        cout<<arra[i].number<<'\n';
    }



    return 0;
}
