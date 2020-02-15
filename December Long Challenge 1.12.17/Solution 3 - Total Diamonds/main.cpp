#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll MAXN = 1000001;
    ll dp[MAXN];
    ll sol[MAXN];

ll ans(ll n) {
    ll oddSum = 0;
    ll evenSum = 0;

    while(n) {
        if((n%10) & 1) {
            oddSum += (n%10);
        }else {
            evenSum += (n%10);
        }

        n /= 10;
    }

    return fabs(oddSum-evenSum);
}

int main() {

    dp[1] = 2;
    sol[1] = 2;

    for(ll i = 2; i <= MAXN; i++) {
        dp[i] = dp[i-1] + 2*(ans(2*i-1) - ans(i)) + ans(2*i-2) + ans(2*i);
        sol[i] = sol[i-1] + dp[i];
    }

    ll tc;
    cin >> tc;

    while(tc--) {
        ll n;
        cin >> n;

        cout << sol[n] << endl;
    }
    return 0;
}
