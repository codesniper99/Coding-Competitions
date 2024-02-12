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
        ll n = s.size();
        if(s=="()"){
            cout<<"NO\n";
            continue;
        }
        string t;
        for(ll i=0;i<n;i++){
            t+="(";
        }

        for(ll i=0;i<n;i++){
            t+=")";
        }
        if(t.find(s, 0)!=string::npos){
                t="";
            for(ll i=0;i<n;i++){
                t+="()";
            }
            if(t.find(s, 0)!=string::npos){
                cout<<"NO\n";
            } else {
            cout<<"YES\n"<<t<<'\n';}
        continue;
        }
        cout<<"YES\n"<<t<<'\n';


    }


    return 0;
}
