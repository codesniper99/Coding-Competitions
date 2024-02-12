#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll ans;
bool visited[1001][1001];
ll solve(vector<vector<ll>> &grid, ll x, ll y) {

     ll n= grid.size();
     ll m = grid[0].size();
     ll res = 0;
     queue<pair<ll,ll>> q;
     q.push({x,y});
     visited[x][y] = true;
     while(!q.empty()){
        pair<ll,ll> p  = q.front();
        q.pop();
        ll a = p.first;
        ll b  = p.second;
        //cout<<a<<' '<<b<<'\n';
        res+=grid[a][b];

        if(a-1>=0){
            if(grid[a-1][b])
                if(!visited[a-1][b]){
                    q.push({a-1,b});
                    visited[a-1][b] = true;
                }
        }

        if(a+1<n){
            if(grid[a+1][b])
                if(!visited[a+1][b]){
                    q.push({a+1,b});
                    visited[a+1][b] = true;
                }
        }

        if(b-1>=0){
            if(grid[a][b-1])
                if(!visited[a][b-1]){
                    q.push({a,b-1});
                    visited[a][b-1] = true;
                }
        }

        if(b+1<m){
            if(grid[a][b+1])
                if(!visited[a][b+1]){
                    q.push({a,b+1});
                    visited[a][b+1] = true;
                }
        }


     }

     return res;

}

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ans = 0;
        memset(visited, false, sizeof(visited));
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> grid(n, vector<ll>(m,0));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>grid[i][j];
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                    if(grid[i][j]!=0 && !visited[i][j])
                        ans = max(ans, solve(grid, i, j));
            }
        }

        cout<<ans<<'\n';

    }


    return 0;
}
