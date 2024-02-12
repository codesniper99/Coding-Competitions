#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool solve(ll i, char c, vector<vector<char>> &g){

    char nxt;
    if(c == 'z'){
        return true;
    }
    ll n = g.size();
    ll m = g[0].size();

    if(i>=m){
        return false;
    }
    if(c == 'v'){
        nxt = 'i';
    } else if (c == 'i'){
        nxt = 'k';
    } else if(c == 'k'){
        nxt = 'a';
    } else {
        nxt = 'z';
    }

    for(ll col = i; col<m ; col++){
        for(ll r = 0; r<n; r++){
            if(g[r][col] == c){
                return solve(col+1,nxt, g);
            }
        }
    }


    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<char>> g(n, vector<char>(m,'.'));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>g[i][j];
            }
        }

        bool res = solve(0, 'v',g);
        if(res){
            cout<<"YES\n";
        } else {
        cout<<"NO\n";
        }

    }


    return 0;
}
