// SOLVED :D
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>

#define ll long long int
#define li long int
#define mods 1000000007
using namespace std;

#define MAX 100000
vector<ll>aarra;
vector<ll>barra;

ll multiply(ll x, ll res[], ll res_size) {

  ll carry = 0;

  for (ll i = 0; i < res_size; i++)
  {
    ll prod = res[i] * x + carry;

    res[i] = prod % 10;

    carry = prod / 10;
  }

    while (carry) {
    res[res_size] = carry % 10;
    carry = carry / 10;
    res_size++;
  }
  return res_size;
}

void power(ll x, ll n,ll o) {
  ll res[MAX];
  ll res_size = 0;
  ll temp = x;

  while (temp != 0) {
    res[res_size++] = temp % 10;
    temp = temp / 10;
  }

  for (ll i = 2; i <= n; i++)
    res_size = multiply(x, res, res_size);

  for (ll i = res_size - 1; i >= 0; i--)
    {
        if( o== 1)
        {
           aarra.push_back(res[i]);

        }
        else if(o==2)
        {
            barra.push_back(res[i]);
        }
    }
}


vector<ll>arra3;

ll reduceB(ll a,string b)
{
    ll mod = 0;
    ll len=b.length();
    for (ll i=0; i<len; i++)
        mod = (mod*10 + b[i] - '0')%a;

    return mod;
}

ll gcdLarge(ll a, string b)
{
     ll num = reduceB(a, b);
     return __gcd(a, num);
}

void add()
{
    ll carry=0;
    ll len1=aarra.size();
    ll len2=barra.size();
    if(len1>=len2)
    {
        for(ll i=0;i<len2;i++)
        {
            ll sum=0;
            sum+=aarra[len1-i-1]+barra[len2-i-1]+carry;
            carry=sum/10;
            arra3.push_back(sum%10);
        }

        for(ll j=len2;j<len1;j++)
        {
            ll sum=0;
            sum=aarra[len1-j-1]+carry;
            arra3.push_back(sum%10);
            carry=sum/10;
        }

        if(carry)
        {
            arra3.push_back(carry);
        }
    }

   else if(len1<len2)
    {
        ll carry=0;
        for(ll i=0;i<len1;i++)
        {
            ll sum=0;
            sum+=aarra[len1-i-1]+barra[len2-i-1]+carry;
            carry=sum/10;
            arra3.push_back(sum%10);
        }

        for(ll j=len1;j<len2;j++)
        {
            ll sum=0;
            sum=barra[len2-j-1]+carry;
            arra3.push_back(sum%10);
            carry=sum/10;
        }

        if(carry)
        {
            arra3.push_back(carry);
        }
    }
}

ll power2(ll x, unsigned ll y, ll p)
{
	ll res = 1;
	x = x % p;
	while (y > 0)
	{
		if (y & 1)
    		res = (res*x) % p;

		y = y>>1;
		x = (x*x) % p;
	}
	return res;
}

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;

        if(a!=b)
         {
           if(n==1)
                 ;
           else
              n=2;


          aarra.clear();
          barra.clear();
          power(a,n,1);

          power(b,n,2);
          ll len1=aarra.size();
          ll len2 = barra.size();
          arra3.clear();
          add();
          string s;
          ll len=arra3.size();
          for(ll i=0;i<len;i++)
           {
             s+=arra3[len-i-1]+'0';
           }


             if(a!=b)
                {
                    cout<<gcdLarge(a-b,s)%mods<<'\n';
                }
             else
                {
                    ll mod = 0;
                    ll len=s.length();
                    for (ll i=0; i<len; i++)
                    mod = (mod*10 + s[i] - '0')%mods;
                    cout<<mod<<'\n';
                }
       }

       if(a==b)
            {
                cout<<(power2(a,n,mods)*2)%mods<<'\n';
            }
    }
    //AKHIL VAID :D
    return 0;
}
