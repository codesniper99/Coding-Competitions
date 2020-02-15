#include <iostream>
#include<stdio.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    scanf("%d",&t);

    while(t--)
    {  long int n,q;
        scanf("%ld %ld",&n,&q);

        ll d[n];
        ll x;
        ll p=1;
        for(ll i=0;i<n;i++)
          {scanf("%lld",&d[i]);
           p*=d[i];
          }
        for(ll i=0; i<q; i++)
        { scanf("%lld",&x);

          if(p>1000000000)
          {
              printf("0\n");
              continue;
          }
          ll j=0;
          while(x!=0 && j!=n)
          {  if(d[j]>x)
               {
                   x=0;break;
               }
              x = x / d[j];
                j++;
          }
            printf("%lld ",x);
        }
    }
    return 0;
}
