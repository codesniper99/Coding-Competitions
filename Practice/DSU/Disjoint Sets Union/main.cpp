#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll p[100001];
ll r[100001];
ll get(ll a){
     if(p[a] == a){
         return a;
    }
    else {
        return (p[a] = get(p[a]));
    }

}
void unionn(ll a, ll b){
    a = get(a);
    b = get(b);
    if(r[a] == r[b]){
        r[a]++;
    }

    if(r[a] > r[b]){
        p[b] = a;
    } else{
        p[a]= b;
      }

}



bool check(ll a, ll b){
     a = get(a);
     b = get(b);
    return (a== b);

}


int main()
{
    ios_base::sync_with_stdio(false);
    ll n,m;

    cin>>n>>m;
    for(ll i=1;i<=n;i++){
        p[i] = i;
        r[i] = 1;
    }
    while(m--){
        string s;
        cin>>s;
        ll a,b;
        cin>>a>>b;
        if(s=="union"){
            unionn(a,b);

        } else {

            cout<<(check(a,b)?"YES\n":"NO\n");
        }


    }


    return 0;
}
