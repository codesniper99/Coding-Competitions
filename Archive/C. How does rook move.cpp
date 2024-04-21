#include<bits/stdc++.h>

#define ll long long int
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second
ll mod =1e9+7;
// calculate multiplication of natural numbers from start to end 
//  Taken from gfg
unsigned long long power(unsigned long long x, 
                                  ll y, int p)
{
    unsigned long long res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0) 
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,  
                                            ll p)
{
    return power(n, p - 2, p);
}
 
// Returns nCr % p using Fermat's little
// theorem.

unsigned long long fac[300002];
unsigned long long nCrModPFermat(unsigned long long n,
                                 ll r, ll p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}


void solve(){
    ll n,k;
    cin>>n>>k;
    ll ans = 0;
    
    map<ll,ll> m;
    for(ll i=1;i<=n;i++){
        m[i]= 1;
    }
    ll remaining = n;
    for(ll i=0;i<k;i++){
        ll x,y;
        cin>>x>>y;
        if(x==y){
            m[x]=0;
            remaining-=1;
        } else{
            m[x]=0;m[y]=0;
            remaining-=2;
        }
    }
    if(remaining == 0){
        cout<<1<<'\n';
        return;
    }
    ll masti = 2;
    ll big_odd_mul = 1;
    ll cnt = 1;
    // cout<<remaining<<'\n';
    while(remaining>=masti){
        // cout<<nCR(remaining, masti)<<' '<< (big_odd_mul) << ' '<< power(2, masti/2,  mod)<<'\n';
        ans = ans %mod + ((nCrModPFermat(remaining, masti, mod) * (big_odd_mul%mod))%mod * power(2, masti/2,  mod)%mod)%mod;
        ans = ans%mod;
        masti+=2;
        big_odd_mul = big_odd_mul%mod*(cnt+2)%mod;
        cnt+=2;
    }


    cout<<ans + 1<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    int T = 1;
    cin >> T;

    fac[0] = 1;
    for (int i = 1; i <= 300002; i++)
        fac[i] = (fac[i - 1] * i) % mod;

    while(T--){
        solve();
    }
    return 0;
}
