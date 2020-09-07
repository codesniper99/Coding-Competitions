    #include<bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp>
    using namespace __gnu_pbds;
    using namespace std;
    typedef long long ll;
    typedef long double ld;
    typedef unsigned long long ull;
    #define MOD 998244353
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        ll t, n, i, j, x, y, m, k, res;
        cin>>n;
        res = 0;
        for(i = 0; i < n; i++)
        {
            m = 1;
            cin>>x;
            while(x)
            {
                y = x % 10;
                res = (res + ((y) * m) % MOD) % MOD;
                m = (m * 10) % MOD;
                res = (res + ((y) * m) % MOD) % MOD;
                m = (m * 10) % MOD;
                x /= 10;
            }
        }
        cout<<res<<" ";
        cout<<(res * n) % MOD;
        return 0;
    }
