//SOLVEDD :DDD

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

        vector<ll>aux(n);
        vector<ll>a(n);
        vector<ll>b(n);

        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<n;i++)
            cin>>b[i];

        if( n==1 || n==2 )
        {
            if( n==1 )
            {
                if(a[0]==b[0])
                    {
                        cout<<"TAK\n";
                        continue;
                    }

                else
                    {
                        cout<<"NIE\n";
                        continue;
                    }


            }
            else if(n==2)
            {
                if(a[0]==b[0])
                {
                    if(a[1]==b[1])
                    {
                        cout<<"TAK\n";
                        continue;
                    }
                    else
                    {
                        cout<<"NIE\n";
                        continue;
                    }

                }
                else
                    {   cout<<"NIE\n";
                        continue;
                    }

            }

            }

        for(ll i=0;i<n;i++)
            aux[i]=a[i];

        int flag=1;

        //first three
        aux[0]=b[0];
        //check for corner

// 0 1 0 0 1 0
// 1 3 3 1 3 3
// 1 2 3 0 0 0
// 1  0 0
        if(n>=2)
         aux[1]+=2*(aux[0]-a[0]);
        else
         flag=0;

        if(n>=3)
         aux[2]+=3*(aux[0]-a[0]);
        else
         flag=0;

         ll i=1;

        while(flag && i<n )
        {
            //cout<<i<<'\n';
            if(aux[i]!=b[i])
            {
                if(aux[i]>b[i])
                    {flag=0;break;}
                else
               {
                if(n-1>=i+1)
                     {//1 2 4 2 3
                         aux[i+1]+=2*(b[i]-aux[i]);
                         if(aux[i+1]>b[i+1])
                            {flag=0;break;}
                     }
                 else
                 {flag=0;break;}

                if(n-1>=i+2)
                     {
                         aux[i+2]+=3*(b[i]-aux[i]);
                         if(aux[i+2]>b[i+2])
                            {flag=0;break;}

                     }
                 else
                 {flag=0;break;}

               }


            }
        i++;

        }

        if(flag==0)
            cout<<"NIE\n";
        else
            cout<<"TAK\n";
    }

    return 0;
}
