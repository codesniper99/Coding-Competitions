#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>


using namespace __gnu_pbds;

#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;
typedef pair<ll, ll> pi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;


#define EB emplace_back
#define REP(i, x, y) for(long long int i=x ; i<y ; i++)
#define F first
#define PB push_back
#define S second
#define MP make_pair
#define MT make_tuple
#define INF 9999999
#define MOD 1000000007

void solve(ll a,ll b)
{
    if(b==1)
        {cout<<a<<" ";return;}
    if(b==0)
        return;
    else
    {

    if(b%2==1)
        {

            solve(a/2,b/2);
        solve(a/2,(b/2)+1);
        }
        else
        {
            solve(a/2,b/2);
            solve(a/2,b/2);
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);
    ll n,k;
    cin>>n>>k;
    ll mini=0,maxi=0;
    ll x=n;
    ll no_of_ones=0;
    ll no_of_bits=0;
    vi bin;
    bin.clear();
    while(x)
    {

        no_of_bits++;
        bin.push_back(x%2);

        x=x/2;
    }

    ll counte=0;
    ll len=bin.size();
    REP(i,0,len){
        if(bin[i]==1)
            {
                mini++;
                maxi+=pow(2,i);

            }
    }


    if(k>=mini && k<=maxi)
    {
ll q=n;
        ll diff=n-k;
        cout<<"YES\n";
        vector<ll> ans(n,1);
        ll counte=0;
        ll pos=n-1;
        while(counte!=diff)
        {
            if(pos>=1){
            ans[pos-1]=ans[pos]+ans[pos-1];
            if(pos<n-2)
            ans[pos+1]=ans[pos+2];
            pos-=2;

            counte++;
            }
            else
            {
                pos=q/2-1;
                q=q/2;
            }
        }
        REP(i,0,k-1)
        {
            cout<<ans[i]<<" ";
        }



        }

    else
    {
        cout<<"NO\n";
    }

    return 0;
}
