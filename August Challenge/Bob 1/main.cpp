//soooolveddd :D

#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        ll usable_b=0,usable_o=0,partial_bo=0;


        for( ll i=0;i<=2;i++)
        {
            if(a[i]=='b')
            {
                if(b[i]=='o')
                {
                    partial_bo++;
                    continue;
                }
                else
                {

                    usable_b++;
                    continue;
                }
            }

            if(b[i]=='b')
            {
                if(a[i]=='o')
                {
                   partial_bo++;
                    continue;
                }

                else
                {
                    usable_b++;
                    continue;
                }
            }

            if(a[i]=='o')
            {
                if(b[i]!='b')
                {
                    usable_o++;
                    continue;
                }
            }

            if(b[i]=='o')
            {
                if(a[i]!='o')
                {
                    usable_o++;
                    continue;
                }
            }




        }


        //cout<<usable_b<<" "<<usable_o<< " "<<partial_bo<<'\n';
        if(((usable_b+partial_bo+usable_o)== 3) &&(usable_b<3)&&(usable_o<2))
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }



    }


    return 0;
}
