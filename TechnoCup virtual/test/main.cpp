#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
#define ll long long int
#define li long int
#define EB emplace_back
#define REP(i, x, y) for(long long int i=x ; i<y ; i++)
#define F first
#define PB push_back
#define S second
#define MP make_pair
#define MT make_tuple
#define INF 9999999
#define MOD 1000000007

using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    ll n;
    cin>>n;
    string t;
    cin>>t;
    string s;
    ll gap=1;
    REP(i,0,n){

        s+=t[i];
        i+=gap-1;
        gap++;
    }

    cout<<s<<'\n';



    return 0;
}
