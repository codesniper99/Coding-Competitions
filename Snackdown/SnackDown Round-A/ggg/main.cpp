

#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int
 ll counter=0;
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
        vector<ll>arra(n);
       for(ll i=0;i<n;i++)
       {
           cin>>arra[i];
       }


            if(arra[n-1]==29)
                {
                    if(n==1)
                        cout<<"0\n"<<arra[0]<<"\n";
                    else
                    {

                        cout<<"1\n";
                         arra[n-1]=31;
                           for(ll i=0;i<n;i++)
                              cout<<arra[i]<<' ';
                          cout<<'\n';
                    }

                }
                else if(arra[n-1]==31)
                {
                    if(n==1)
                        cout<<"0\n"<<arra[0]<<"\n";
                    else
                    {

                        cout<<"1\n";
                         arra[n-1]=37;
                           for(ll i=0;i<n;i++)
                              cout<<arra[i]<<' ';
                          cout<<'\n';
                    }

                }
                else if(arra[n-1]==37)
                {
                    if(n==1)
                        cout<<"0\n"<<arra[0]<<"\n";
                    else
                    {

                        cout<<"1\n";
                         arra[n-1]=41;
                           for(ll i=0;i<n;i++)
                              cout<<arra[i]<<' ';
                          cout<<'\n';
                    }

                }
                else if(arra[n-1]==41)
                {
                    if(n==1)
                        cout<<"0\n"<<arra[0]<<"\n";
                    else
                    {

                        cout<<"1\n";
                         arra[n-1]=43;
                           for(ll i=0;i<n;i++)
                              cout<<arra[i]<<' ';
                          cout<<'\n';
                    }

                }
                  else if(arra[n-1]==43)
                {
                    if(n==1)
                        cout<<"0\n"<<arra[0]<<"\n";
                    else
                    {

                        cout<<"1\n";
                         arra[n-1]=47;
                           for(ll i=0;i<n;i++)
                              cout<<arra[i]<<' ';
                          cout<<'\n';
                    }

                }
                  else if(arra[n-1]==47)
                {
                    if(n==1)
                        cout<<"0\n"<<arra[0]<<"\n";
                    else
                    {
                        cout<<"1\n";
                         arra[n-1]=29;
                           for(ll i=0;i<n;i++)
                              cout<<arra[i]<<' ';
                          cout<<'\n';
                    }

                }
            else
                {
                      if(n==1)
                        cout<<"0\n"<<arra[0]<<"\n";
                    else
                    {
                        // insert
                         arra[n-1]=31;
                           for(ll i=0;i<n;i++)
                              cout<<arra[i]<<' ';
                          cout<<'\n';
                    }

                }

        }

    return 0;
}

