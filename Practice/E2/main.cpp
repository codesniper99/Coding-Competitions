#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    map<ll, ll > ans;
    ll open = 1;ll covered = 0;

    for(ll k=2;k<=1000000;k++){
            open = 1;
            covered = 1+k;
            open = k*k;
            for(int i=0;i<=60;i++){
                covered+=open;
                if(covered>1e18)
                    break;
                ans[covered] =1;

                if(open > (long long int) (1e18)/k)break;
                open*=k;
            }
        }
    while(t--){
        ll n;
        cin>>n;
        if (n < 3)
        {
            cout << "NO" << endl;
            continue;
        }
        long long d = 4*n - 3;
        long long sq = sqrt(d);
        long long sqd = -1;
        for (long long i = max(0ll, sq - 5); i <= sq + 5; ++i) {
            if (i*i == d)
            {
                sqd = i;
                break;
            }
        }
        if (sqd != -1 && (sqd - 1) % 2 == 0 && (sqd - 1) / 2 > 1)
        {
            cout << "YES" << endl;
            continue;
        }
        if(ans.count(n)){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";

    }


    return 0;
}
