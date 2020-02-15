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

        ll sm=0,sn=0;

        vector<ll>a(n);
        vector<ll>b(m);
        ll countm=0;
        ll countn=0;
        ll flag=0;
        for(ll i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]==0)
                {
                    a[i]=100000000+1;
                    countn++;
                    continue;
                }
                if(a[i]>1)
                    flag=1;





            }
        for(ll i=0;i<m;i++)
            {
                cin>>b[i];
                if(b[i]==0)
                {

                    b[i]=100000000+1;
                    countm++;
                    continue;
                }
                  if(b[i]>1)
                    flag=1;


            }


            n-=countn;
            m-=countm;
            ll flag2=0;
            if(n!=m)
                cout<<"Alice\n";
            else{

            if( flag == 1)
            {

                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
                for(ll i=0;i<n;i++)
                {
                    if(a[i]>b[i])
                    {
                        flag2=1;
                        break;
                    }

                }

                if(flag2==1)
                    cout<<"Alice\n";
                else
                    cout<<"Bob\n";

            }

            else
                cout<<"Bob\n";


            }

    }

    return 0;
}
