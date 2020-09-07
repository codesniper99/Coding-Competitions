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


bool isValid(ll row, ll col, ll board[50][50],ll rowmax,ll colmax)
{
    return ((row >= 0) && (row < rowmax) &&
           (col >= 0) && (col < colmax) && (board[row][col]==0) );
}
long long subarrayXor(vector<ll> arr, ll n, ll m)
{
    long long ans = 0; // Initialize answer to be returned

    // Create a prefix xor-sum array such that
    // xorArr[i] has value equal to XOR
    // of all elements in arr[0 ..... i]
    int* xorArr = new int[n];

    // Create map that stores number of prefix array
    // elements corresponding to a XOR value
    unordered_map<int, int> mp;

    // Initialize first element of prefix array
    xorArr[0] = arr[0];

    // Computing the prefix array.
    for (int i = 1; i < n; i++)
        xorArr[i] = xorArr[i - 1] ^ arr[i];

    // Calculate the answer
    for (int i = 0; i < n; i++) {
        // Find XOR of current prefix with m.
        int tmp = m ^ xorArr[i];

        // If above XOR exists in map, then there
        // is another previous prefix with same
        // XOR, i.e., there is a subarray ending
        // at i with XOR equal to m.
        ans = ans + ((long long)mp[tmp]);

        // If this subarray has XOR equal to m itself.
        if (xorArr[i] == m)
            ans++;

        // Add the XOR of this subarray to the map
        mp[xorArr[i]]++;
    }

    // Return total count of subarrays having XOR of
    // elements as given value m
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        a.clear();
        for( ll i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll xo=a[0];

        ll answer=0;
        vector< ll >r(n);
        r.clear();
        r[0]=xo;

        for( ll i=1;i<n;i++)
        {
            xo^=a[i];
            r[i] =xo;
        }


        map<ll,ll>m;
        map<ll,ll>where;
        where.clear();
        m.clear();
        vi ans(n,0);
        ll sum=0;



        REP(i,0,n)
        {
           ll num = r[i];

           if( where[r[i]]==0)
           {
               if(r[i]==0)
               {
                   sum+=i;
                   //ans[i]=i;
               }
               m[r[i]]=i;
               where[r[i]]=1;
           }
           else
           {
               if(r[i]==0)
               {
                   sum+=i;
               }

               sum+= i - (m[r[i]]+1) +ans[m[r[i]]];
               ans[i] = i-(m[r[i]]+1) + ans[m[r[i]]];
           }


        }

        cout<<sum<<"\n";


    }


    return 0;
}
/*
3
6
5 2 7 5 2 7

6
5 2 2 2 5 7

3
5 2 7
*/
