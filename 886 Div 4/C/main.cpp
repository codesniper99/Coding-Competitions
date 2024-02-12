#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
//CCCCCC
using namespace std;

        string ans= "";
        ll z=0;
        bool check(ll i,vector<vector<char>> &grid ){
            for(ll j=0;j<8;j++){
                if(grid[j][i]>='a' && grid[j][i]<='z'){
                    z++;
                } else break;
            }
            if(z==8){
                return true;
            }
            return false;

        }
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
            ans="";
        vector<vector<char>> grid(8, vector<char>(8,'.'));
        ll found = -1;
        for(ll i=0;i<8;i++){
            for(ll j=0;j<8;j++)
            {

                cin>>grid[i][j];
                if(grid[i][j]>='a' && grid[i][j]<='z'){
                    found = j;
                }
            }
        }
        for(ll i=0;i<8;i++){
            if(grid[i][found]>='a' && grid[i][found]<='z'){
               ans+=grid[i][found];
            }
        }
        cout<<ans<<'\n';
    }


    return 0;
}
