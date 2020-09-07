//Solvedd
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
        ll n;
        cin>>n;
        string name;
        cin>>name;
        ll dee=0,dum=0;
        if(name=="Dee")
            dee--;
        else if(name=="Dum")
            dum--;
        string stacks;
        for(ll i=0;i<n;i++)
        {
            cin>>stacks;
            //Dee
            if(stacks[0]=='0')
            {
                dee++;
                ll len=stacks.length();
                for(ll i=1;i<len;i++)
                {
                    if(stacks[i]=='0')
                        dee++;
                }
            }
            else if(stacks[0]=='1')
            {
                dum++;
                ll len=stacks.length();
                for(ll i=1;i<len;i++)
                {
                    if(stacks[i]=='1')
                        dum++;
                }
            }

        }
        if(dee>dum)
            cout<<"Dee\n";
        else if(dee<dum)
            cout<<"Dum\n";
            else if(dee==dum)
            {
                if(name=="Dee")
                    cout<<"Dee\n";
                else
                    cout<<"Dum\n";
            }



    }



    return 0;
}
