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


int main()
{
    ios::sync_with_stdio(0);

    ll n;
    cin>>n;
    if(n<2)
    {
        cout<<"0\n";
        return 0;
    }
    if(n==2)
    {
        cout<<"1\n";
        return 0;
    }
    vi sizes(n);
    map<ll,ll> nums;
    nums.clear();

    REP(i,0,n)
    {
        cin>>sizes[i];
        nums[sizes[i]]++;
    }
    sort(sizes.begin(),sizes.end());
    vector<ll> maxi;

    map<ll,ll> sums;
    sums.clear();
    REP(i,0,n)
    {
        REP(j,0,n)
        {
            if(i!=j && sums[sizes[i]+sizes[j]]!=0)
            {
                sums[sizes[i]+sizes[j]]++;
            }
        }
    }
    for(std::map<ll,ll>::iterator it=sums.begin(); it!=sums.end(); ++it)
    {
        ll sum=it->first;
        ll ans=0;

        REP(j,0,n)
        {
            if(nums[sum-sizes[j]] && (sum-sizes[j] >=0) && (sum-sizes[j]!=sizes[j]))
            {
               // cout<<sum<<" "<<sizes[j]<<"\n";

                ans++;
            }
        }
        maxi.push_back(ans);
        //cout<<i<<" "<<ans<<"\n";
    }

    sort(maxi.begin(),maxi.end());
    ll len=maxi.size();
    if(len>=1)
    cout<<maxi[len-1]/2;
     else
                cout<<"0\n";

    return 0;
}
