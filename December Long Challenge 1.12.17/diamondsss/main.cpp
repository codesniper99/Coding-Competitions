#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll diamondsofrooms[2000002];
ll results[1000001];
int main()
{
    ll t;
   // memset(results)
    memset(diamondsofrooms,0,sizeof(diamondsofrooms));
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll sum=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                ll roomno=i+j;
                if(diamondsofrooms[roomno]!=0)
                    {if(n>=2)
                      sum+=(diamondsofrooms[roomno])*2;
                    else
                        sum+=diamondsofrooms[roomno];
                    }
                    else
                    {
                        ll x=roomno;
                        ll even=0,odd=0,digit=0;
                        while(x)
                        {
                            digit=x%10;
                            if(digit%2==1)
                                odd+=digit;
                            else
                                even+=digit;
                                x=x/10;
                                             }
                        diamondsofrooms[roomno]=abs(even-odd);

                        if(n>=2)
                    {sum+=(diamondsofrooms[roomno])*2;}
                    else
                        sum+=diamondsofrooms[roomno];                    }
            }
        }

        for(ll i=1;i<=n;i++)
        {
            if(diamondsofrooms[2*i]!=0)
            { sum+=diamondsofrooms[2*i];
            }
            else
            {ll roomno=2*i;
              ll x=roomno;
                        ll even=0,odd=0,digit=0;
                        while(x)
                        {
                            digit=x%10;
                            if(digit%2==1)
                                odd+=digit;
                            else
                                even+=digit;
                                x=x/10;
                        }
                        diamondsofrooms[roomno]=abs(even-odd);
                        sum+=diamondsofrooms[roomno];

            }
        }

        cout<<sum<<'\n';

    }
    return 0;
}
