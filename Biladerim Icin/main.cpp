#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;




void solve()
{
    ll n,m;
    cin>>n>>m;
    // n==1
    ll limit = (n*n+n)/2;
    if( m<n-1)
        {
            cout<<"-1\n";
            return;
        }
    else if ( m > limit)
    {
        cout<<"-1\n";
        return;
    }
    else
    {
        ll ans=2;
        ll left = m - (n-1);
        ll layers = ceil((double)left/(double)n);
        ans+=layers;
        cout<<ans<<'\n';

    }

}









int main()
{
    ios::sync_with_stdio(0);

    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
