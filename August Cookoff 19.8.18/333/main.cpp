#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<string>

#include<string.h>
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
        char buffer [33];

        ll n;
        cin>>n;
        itoa(n,buffer,10);
        string str = string(buffer);
        ll len=str.size();
        if(n<333)
            cout<<"333\n";
        else
        {
            ll threes=0;
            for(ll i=0;i<len;i++)
            {
                if(str[i]=='3')
                {
                    threes++;
                }

            }
            if(threes>3)
                    {cout<<n+1<<'\n';continue;}

            else{
                    ll f=true;
                ll dig=n+1;
                while(f)
                {
                    char buffer2 [33];
                    itoa(dig,buffer2,10);
                    string str2 = string(buffer2);
                    ll len2=str2.size();

                    ll threes2=0;
                    for(ll i=0;i<len2;i++)
                    {
                        if(str2[i]=='3')
                        {
                            threes2++;
                        }

                    }
                    if(threes2 >=3){
                        f=false;
                    }
                    else
                    {
                        dig++;
                    }
                }
                cout<<dig<<'\n';

            }

        }
















    }
    return 0;
}
