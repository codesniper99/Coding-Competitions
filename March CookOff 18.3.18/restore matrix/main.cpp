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

        int flag=0;
        ll mat[n][m];
        for(ll i=0;i<n;i++)
            for(ll j=0;j<m;j++)
            cin>>mat[i][j];

            if(mat[0][0]==-1)
                mat[0][0]=1;


        for( ll i=1;i<n;i++)
        {
            if(mat[i][0]==-1)
                {
                    mat[i][0]=mat[i-1][0];

                }
        }

        for( ll j=1;j<m;j++)
        {
            if(mat[0][j]==-1)
                {
                mat[0][j]=mat[0][j-1];

                }
        }


        for(ll i=1;i<n;i++)
            for(ll j=1;j<m;j++)
        {

            if(mat[i][j]==-1)
                {
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                }
        }



        for(ll i=0;i<n-1;i++)
        {
            for(ll j=0;j<m-1;j++)
            {
                if(mat[i][j]>mat[i+1][j] || mat[i][j]>mat[i][j+1])
                    flag=1;
            }
        }
        for(ll i=0;i<m-1;i++)

    	{
    		if(mat[0][i+1]<mat[0][i])
    		flag=1;
    	}
    	for(ll i=0; i<n-1;i++)

    	{
    		if(mat[i+1][0]<mat[i][0])
    		flag=1;
    	}
        if(mat[n-2][m-1]>mat[n-1][m-1])
            flag=1;

        if(mat[n-1][m-2]>mat[n-1][m-1])
            flag=1;

        if(mat[0][m-1]>mat[1][m-1])
            flag=1;

        if(mat[n-1][0]>mat[n-1][1])
            flag=1;


        if(flag==1)
            {cout<<"-1\n";continue;}

        else if(flag==0)
            {
        for(ll i=0;i<n;i++)
        {


            for(ll j=0;j<m;j++)
                cout<<mat[i][j]<<' ';
            cout<<'\n';
        }
        }
    }

    return 0;
}
