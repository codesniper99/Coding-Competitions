#include <iostream>
#include<stdio.h>
#define ll long long int
#include<stdlib.h>
#include<string.h>

#include<string>
using namespace std;

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,r;
        scanf("%lld %lld",&n,&r);
        char no[1000];
        ll sum=0;

        for(ll i=n;i<=r;i++)
    {   if(i%2!=0)
         continue;
        itoa(i, no , 10);

        ll y;
        ll a=0;
        y=strlen(no);

        for(ll e=0;e<y;e++)
         {
            a+=no[e];
         }

        if(a%3!=0)
            continue;

        ll x=atoi(no);
        sum += x;

    }
         printf("%d\n",sum);

}

return 0;
}
