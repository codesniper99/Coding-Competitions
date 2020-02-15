//SOLVED!!!
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,x,k;
        cin>>n>>m>>x>>k;
        string s;
        cin>>s;

        ll work_in_even=0;
        ll work_in_odd=0;

        ll no_of_even_workers=0;
        ll no_of_odd_workers=0;

        for(ll i=0;i<k;i++)
        {
            if(s[i]=='E')
                no_of_even_workers++;

        }
        no_of_odd_workers=k-no_of_even_workers;

        for(ll i=1;i<=m;i++)
        {
            if(i%2==1)
            {
                //odd
                if(no_of_odd_workers>=x)
                {
                    work_in_odd+= x;
                    no_of_odd_workers-=x;
                }
                else
                {
                    work_in_odd+=no_of_odd_workers;
                    no_of_odd_workers=0;

                }

            }

            else if(i%2==0)
            {
                //even
                if(no_of_even_workers>=x)
                {
                    work_in_even+= x;
                    no_of_even_workers-=x;
                }
                else
                {
                    work_in_even+=no_of_even_workers;
                    no_of_even_workers=0;

                }




            }

        }


        if(work_in_even+work_in_odd>=n)
            cout<<"yes\n";
        else
            cout<<"no\n";

    }

    return 0;
}
