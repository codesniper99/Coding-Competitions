#include <bits/stdc++.h>
#include<algorithm>

#define ll long long int
#define li long int
typedef unsigned long long int uint_t;
using namespace std;

ll countSetBits(ll n)
{
  ll c = 0;
  while (n)
  {
    c += n & 1;
    n >>= 1;
  }
  return c;
}

uint_t snoob(uint_t x)
{

  uint_t rightOne;
  uint_t nextHigherOneBit;
  uint_t rightOnesPattern;

  uint_t next = 0;

  if(x)
  {

    // right most set bit
    rightOne = x & -(signed)x;

    // reset the pattern and set next higher bit
    // left part of x will be here
    nextHigherOneBit = x + rightOne;

    // nextHigherOneBit is now part [D] of the above explanation.

    // isolate the pattern
    rightOnesPattern = x ^ nextHigherOneBit;

    // right adjust pattern
    rightOnesPattern = (rightOnesPattern)/rightOne;

    // correction factor
    rightOnesPattern >>= 2;

    // rightOnesPattern is now part [A] of the above explanation.

    // integrate new pattern (Add [D] and [A])
    next = nextHigherOneBit | rightOnesPattern;
  }

  return next;
}

int main()
{
    ios::sync_with_stdio(0);
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c; cin>>a>>b>>c;
        int x= countSetBits(a),y=countSetBits(b);
        ll k=(1<<x)-1,sum=0,p=(1<<y)-1;

        while(k<=c-p)
        {
            if(countSetBits(c-k)==y)
                sum++;
            k=snoob(k);
        }
        cout<<sum<<'\n';
    }
    return 0;
}
