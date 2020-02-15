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
        ll num=0;

        int a[5];
        for(int i=0;i<5;i++)
            {

                cin>>a[i];
                if(a[i]==1)
                    num++;

            }

            if(num==0)
            {
                cout<<"Beginner\n";
            }
            else if(num==1)
            {
                cout<<"Junior Developer\n";
            }

            else if(num==2)
            {
                cout<<"Middle Developer\n";
            }

            else if(num==3)
            {
                cout<<"Senior Developer\n";
            }
         else if(num==4)
            {
                cout<<"Hacker\n";
            }
             else if(num==5)
            {
                cout<<"Jeff Dean\n";
            }





    }

    return 0;
}
