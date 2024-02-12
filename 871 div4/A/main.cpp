#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string t = "codeforces";
        int ans = 0;
        for(int i=0;i<10;i++){
            if(s[i]!=t[i])ans++;
        }
        cout<<ans<<'\n';
    }


    return 0;
}
