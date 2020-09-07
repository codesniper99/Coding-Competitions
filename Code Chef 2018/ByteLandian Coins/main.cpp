#include<bits/stdc++.h>
#define ll long long int
using namespace std;

map<ll,ll>mapping;

ll solve(long long n)
{   if (mapping.find(n)!=mapping.end())
	return mapping[n];
    if(n==1||n==0)
        return n;
    long long sum=solve(n/2)+solve(n/3)+solve(n/4);
    if(sum>n)
        {
        	mapping[n]=sum;
        	return sum;
        }
    else
    {
        mapping[n]=n;
        return n;
    }
}

int main()
{

    ll n;

    while(cin>>n)
    {
         cout<<solve(n)<<'\n';
    }
    return 0;
}
