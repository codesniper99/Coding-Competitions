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

        string stacks;
        ll moves=0;
        ll turn=2;
        if(name=="Dee")
            turn=0;
        else
            turn=1;
        for(ll i=0;i<n;i++)
        {
            cin>>stacks;
            //Dee
            if(stacks[0]=='0')
            {

            if(turn==0){
                ll state=1;
                ll len=stacks.length();
                for(ll i=1;i<len;i++)
                {
                      if(stacks[i]==state)
                      {
                          state=1-state;
                          turn=1-turn;
                      }
                        else
                        {

                            if(i==len-1)
                            {
                                turn=1-turn;
                            }

                        }

                }
            }
            else{
                continue;
            }
            }


            else if(stacks[0]=='1')
            {
                if(turn==1){
                ll state=0;
                ll len=stacks.length();
                for(ll i=1;i<len;i++)
                {
                      if(stacks[i]==state)
                      {
                          state=1-state;
                          turn=1-turn;
                      }
                        else
                        {
                            if(i==len-1)
                            {
                                turn=1-turn;
                            }

                        }

                }
            }

            else
            {
                continue;
            }
            }

        }

        if(turn == 0)
            cout<<"Dum\n";
        else
            cout<<"Dee\n";



    }



    return 0;
}
