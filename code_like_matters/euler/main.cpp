#include <bits/stdc++.h>
#pragma gcc optimize("ofast")
using namespace std;

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define mod 1000000007
#define us unsigned short
#define IOS ios_base::sync_with_stdio(0);
#define INF LONG_MAX
#define PI 3.1415926535897932384626
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define rep(x,j,n)for(ll x=j;x<n;x++)
typedef vector<pair<ll,ll>> vpi;
typedef vector<ll> vi;
typedef vector<vi> vvi;

ll modexp(ll a,ll b,ll m)
{
	ll r=1;
	a=a%m;
	while(b>0)
	{
	if(b&1)
		r=(r*a)%m;
	b=b/2;
	a=(a*a)%m;
	}
	return r%m;
}

// Prototype of a utility function that
// returns minimum of two integers
ll min(ll a, ll b);

// Returns value of Binomial Coefficient C(n, k)
ll binomialCoeff(ll n, ll k)
{
    ll C[n + 1][k + 1];
    ll i, j;

    // Caculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1] +
                          C[i - 1][j];
        }
    }

    return C[n][k];
}

// A utility function to return
// minimum of two integers
ll min(ll a, ll b)
{
    return (a < b) ? a : b;
}
int main()
{
    IOS

    ll answer=0;
    answer+=binomialCoeff(19,15);
    ll rem=325;
    answer+=binomialCoeff(15,3)*binomialCoeff(12,3)*binomialCoeff(9,3);
    rep(i,0,25)
    {
        answer+=binomialCoeff(rem-i,i+1);
        rem=rem-i;
    }
    cout<<answer;

    return 0;
}
