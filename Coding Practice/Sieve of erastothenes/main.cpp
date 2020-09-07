#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d",&t);
   while(t--)
    {
        long long int m,n;
        scanf("%lld %lld",&m,&n);
        //Sieve
        bool prime[n+1];
        prime[0]=false;
        prime[1]=false;
        for(ll i=2;i<=n;i++)
            prime[i] = true;

        for(ll i=2; i*i<= n;i++)
        {
            if(prime[i])
            {
                for(ll j=i*2;j<=n;j+=i)
                    prime[j]=false;
            }

        }
        // Printing
        for(ll z=m;z<=n;z++)
        {
            if(prime[z])
                printf("%lld\n",z);
        }

    }

    return 0;
}
