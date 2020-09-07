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

        ll n,m;
        cin>>n>>m;
        string s;
        string no;
        ll a[n][m+2];
        for(ll i=0;i<n;i++)
        {
            s.clear();
            //char c;
            cin>>s;
            cin>>no;
            if(s=="correct")
                a[i][0]=1;
            else
                a[i][0]=0;

            ll fail=0;
            for(ll j=0;j<m;j++)
            {

                if(no[j]=='0')
                    fail++;

                a[i][j+1]=s[j];
            }
            a[i][m+1]=fail;
           // cout<<fail<<"kk";

        }

        int flag_inv=0;
        int flag_weak=0;
        int status=-1;
        for(ll i=0;i<n;i++)
        {
            if(a[i][0]==1)
            {// correct
                if(a[i][m+1]==0)
                {
                    ;
                }
                else
                {
                    flag_inv=1;
                }
            }






        }
        for(ll i=0;i<n;i++)
        {

           if(a[i][0]==0)//wrong
            {
                if(a[i][m+1] == 0)
                {
                    if(flag_inv == 0)
                        flag_weak=1;

                }


            }
        }
        if(flag_weak==1)
        {
            cout<<"WEAK\n";continue;
        }
        if(flag_inv==1)
        {
            cout<<"INVALID\n";continue;
        }
        if(flag_inv==0&&flag_inv==0)
        {
            cout<<"FINE\n";continue;
        }


    }

    return 0;
}
