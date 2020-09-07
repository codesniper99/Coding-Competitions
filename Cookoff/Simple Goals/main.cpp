#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
         string s;
         string t1,t2;
      t1=" ";
      t2=" ";

        ll goal1=0,goal2=0;
        for(ll i=0;i<n;i++)
        {
            cin>>s;

            if(i==0)
                {t1=s;
                 goal1++;
            }
            else if(t1==s)
            {
                goal1++;
            }
            else
            {
                t2=s;
                goal2++;
            }
        }
        if(goal1>goal2)
            cout<<t1<<'\n';
        else if(goal1<goal2)
          cout<<t2<<'\n';
          else
            cout<<"Draw\n";
    }
    return 0;
}
