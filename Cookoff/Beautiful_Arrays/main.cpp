#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);

    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        ll total_A,total_B,total_C,total_D;
        total_A=0;
        total_B=0;
        total_C=0;
        total_D=0;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        { cin>>a[i];
        //cout<<a[i];
            if(a[i]%4==0)
                total_A++;
            else if(a[i]%4==1)
                 total_B++;
            else if(a[i]%4==2)
                total_C++;
            else
                total_D++;
        }
       // cout<<"kkkk "<<total_A<<total_B<<total_C<<total_D<<'\n';
        if(total_A>0 && total_B==0 && total_C==0 && total_D == 0)
        {cout<<"0\n";
          continue;
        }
        ll cost_1=0;
        cost_1+= total_B/4 + total_C/4+ total_D/4
        ;
        total_B=total_B%4;
        total_C=total_C%4;
        total_D=total_D%4;

        cost_1+=min(total_B,total_D);
        total_B-=min(total_B,total_D);
        total_D-=min(total_B,total_D);

        cost_1+=total_C/2;


        total_C%=2;

        if(total_B==0&&total_C==0 && total_D==0)
        {
            cout<<cost_1<<'\n';
            continue;
        }
        else
            cout<<"-1\n";






    }

    return 0;
}
