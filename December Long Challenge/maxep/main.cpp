#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    ll n,c;
    cin>>n>>c;
    ll left=1;
    ll right=n;
    ll flag=1;
    ll maxi=0;
    ll mid=(right+3.5*left)/4.5;

    while(flag && maxi<=4)
    {
        //cout<<left<<","<<mid<<","<<right<<" \n";
        if(left==right)
        {
            flag=0;
            break;
        }
        cout<<"1 "<<mid<<"\n";
        fflush(stdout);
        ll status=-2;
        cin>>status;

        if(status==-1)
            return 0;

        if(status==1)
        {
            right=mid;
            mid=(right+3.5*left)/4.5;
            cout<<"2\n";
            fflush(stdout);
            maxi++;
        }

        else if(status==0)
        {
            left=mid+1;
            mid=(3.5*right+left)/4.5;

        }

    }
    ll ans=1;
    ll status=0;
    if(flag==0)
    {
        cout<<"3 "<<left<<'\n';
        fflush(stdout);
        return 0;
    }


    while(status==0 && maxi>=5)
    {
        cout<<"1 "<<left<<"\n";
        fflush(stdout);
        cin>>status;

        if(status==-1)
            return 0;
        if(status==1)
        {
            cout<<"2\n";
            fflush(stdout);
            cout<<"3 "<<left<<'\n';
            fflush(stdout);
            return 0;
        }
        else
        {
            left++;
        }


    }


    return 0;
}
