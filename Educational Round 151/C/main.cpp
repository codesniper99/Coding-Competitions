#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool check(string p, string l, string r) {
    int m = l.size();
    for(int i=0;i<m;i++){
        if(p[i]<l[i] || p[i]>r[i]){
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        ll m,n=s.size();
        cin>>m;
        string l,r;
        cin>>l>>r;
        ll totalSubsequences = 0;
        map<int, vector<string>> allPossibleStrings;
        for(int i=l[0];i<=r[0];i++){
            for(int j=0;j<n-m+1;j++){
                if(s[j]==i){
                    allPossibleStrings[i].push_back(s.substr(j, m));
                }
            }
        }

        // total passwords
        ll totalPasswords = 1;
        for(int i=0;i<m;i++){
            totalPasswords *= (r[i]-l[i]+1);
        }

        // collisions
        ll collisions = 0;
        for(int i=l[0];i<=r[0];i++){
            vector<string> tmp = allPossibleStrings[i];
            totalSubsequences+= tmp.size();
            for( auto s: tmp){
               if(check(s, l, r)){
                    collisions++;
                }
            }
        }
        cout<<"Collisions = > "<<collisions<<'\n';
        if(totalPasswords-collisions>0){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";



    }


    return 0;
}
