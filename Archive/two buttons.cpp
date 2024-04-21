#include<bits/stdc++.h>
#include <cstring>
#define ll long long int
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

vector<int> adj[20001];
void solve(){
    ll n, m;
    cin >> n >> m;
    if(n==m){
        cout<<0<<'\n';
        return;
    }

    for(int i=1;i<=10001;i++){
        adj[i].push_back(i-1);
        adj[i].push_back(2*i);
    }
    queue<int> q;
    q.push(n);
    bool visited[20001];
    memset(visited, false, sizeof(visited));
    int cnt = 0;
    for(;;){
        vector<ll> newppl;
        while(!q.empty())
        {
            int tp = q.front();
            // cout<<tp<<'\n';
            q.pop();
            if(tp == m){
                cout<<cnt<<'\n';
                return;
            }

            if(!visited[tp]){
                visited[tp] = true;
            }
            else{
                continue;
            }
            vector<int> cands = adj[tp];
            // cout<<adj[10].size();
            for (auto x: cands){
                if(!visited[x]){
                    // cout<<x<<' ';
                    newppl.push_back(x);
                }
            }
        }
        for (auto y: newppl){
            q.push(y);
        }
        if(q.empty())
            return;
        cnt++;
    }
    
    
    

}

int main() {
    ios::sync_with_stdio(0);
    int T = 1;
    // cin >> T;
    // memset(dp, LLONG_MAX, sizeof(dp));
    while(T--){
        solve();
    }
    return 0;
}
