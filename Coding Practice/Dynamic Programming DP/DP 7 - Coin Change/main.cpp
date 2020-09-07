//RECURSION

#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int Total(vector<int> a,int m, int n)
{
    if(m==0)
    {
      return 1;

    }

    if(m<0)
    {
        return 0;
    }

    if(n<=0 && m>=1)
        return 0;
    return (Total(a,m-a[n-1],n)+Total(a,m,n-1));

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        vector<int>a(n);

        for(int i=0;i<n;i++)
            cin>>a[i];

        cout<<"\n"<<Total(a,m,n)<<"\n";

    }

    return 0;
}
