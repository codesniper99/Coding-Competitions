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
        ll n, m;
        ll flag = 1;
        ll element;
        cin>>n>>m;
        vector<ll> mat[n];

        for(ll i= 0; i<n; i++)
            for(ll j= 0; j< m; j++)
            {
                cin>>element;
                mat[i].push_back(element);
            }

        for(ll i= 0; i< n ; i++)
            {
            for(ll j = 0; j< m; j++)
            {
                element = mat[i][j];
                if(i >0 && i< n-1)
                {
                    if(j > 0)
                    {
                        if(element!=-1 && (element < mat[i][j-1] || element < mat[i-1][j]))
                        {
                            flag = 0;
                            break;
                        }
                        else if(element==-1)
                        {
                            mat[i][j] = max(mat[i][j-1], mat[i-1][j]);
                        }
                    }
                    else
                     {
                        if(element==-1)
                        {
                            mat[i][j] =  mat[i-1][j];
                        }

                        else if(element<mat[i-1][j])
                            {
                            flag = 0;
                            break;
                        }
                    }
                }
                else if(i==0)
                    {
                    if(j==0)
                     {
                        if(element==-1)
                            mat[i][j] = 1;
                    }
                    else
                    {
                        if(element!=-1 && element <mat[i][j-1])
                         {
                            flag = 0;
                            break;
                        }
                        else if(element == -1)
                         {
                            mat[i][j] = mat[i][j-1];
                        }
                    }
                }
                else if(i == n-1)
                {
                    if(j == 0)
                     {
                        if(element == -1)
                        {
                            mat[i][j] = mat[i-1][j];
                        }
                        else if(element < mat[i-1][j])
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else {
                        if(element == -1)
                         {
                            mat[i][j] = max(mat[i][j-1], mat[i-1][j]);
                        }
                        else {
                            if(element < mat[i][j-1] || element < mat[i-1][j])
                             {
                                flag = 0;
                                break;
                            }
                        }
                    }
                }
            }
           ll v;
           v=flag;
           //cout<<v;
            if(!flag)
                break;
        }
        if(flag!=0)
        {
            for(ll i = 0; i < n; i++)
                {
                for(ll j = 0; j < m; j++)
                    cout<<mat[i][j]<<" ";
                cout<<'\n';
            }
        }
        else
            cout<<"-1"<<'\n';

    }
    return 0;
}
