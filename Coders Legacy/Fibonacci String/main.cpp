#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        map<int,int>m;

       ll a[26]={0};
       ll b;
        ll len=s.length();

        ll counter=0;
        for(ll i=0;i<len;i++)
        {
                m[(int)(s[i]-'a')]++;

        }
        int j=0;
         for (ll i = 0; i < 26; i++) {

            if (m[i]) {
                a[j] = m[i];
                j++;
            }
            m[i] = 0;
        }

        for(ll i=0;i<j;i++)
        {
            if(a[(int)(s[i]-'a')]>0)
                counter++;
        }
        if(counter<3)
        {
            cout<<"Dynamic\n";
            continue;
        }
        sort(a,a+j);
        int flag=0;
       for(ll i=2;i<j;i++)
       {
           if(a[i]!=0 && a[i-1]!=0  && a[i-2]!=0)
                    if(a[i-2]+a[i-1]==a[i])
                   {flag=1;
                    // cout<<i<<j<<k<<'\n';
                   break;}
        }

        if(flag!=1)
        {
            ll x=a[0];
            a[0]=a[1];
            a[1]=x;
       for(ll i=2;i<j;i++)
       {
           if(a[i]!=0 &&a[i-1]!=0&&a[i-2]!=0)
                    if(a[i-2]+a[i-1]==a[i])
                   {flag=1;
                    // cout<<i<<j<<k<<'\n';
                   break;}
        }

        }

       if(flag==1)
        cout<<"Dynamic\n";
       else
        cout<<"Not\n";

    }

    return 0;
}
