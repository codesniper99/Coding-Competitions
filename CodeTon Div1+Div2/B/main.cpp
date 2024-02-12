#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll> bits(32,0);

void setvectorrep(ll x){
    for(int i=0;i<32;i++){
        bits[i] = 0;
    }
        int counter = 0;
    while(x){
        bits[counter++] = x%2;
        x/=2;
    }
}
bool equality(vector<ll> ans) {
    for(int i=0;i<32;i++){
        if(ans[i]!=bits[i]){
            return false;
        }
    }
    return true;

}

bool good(vector<ll> &ans, stack<ll> a){
    ll num = a.top();
    ll counter = 0;
    vector<ll> tmp(32,0);
    for(int i=0;i<32;i++){
        tmp[i] = ans[i];
    }
    while(num){
        ll res = tmp[counter] | (num%2) ;
        //cout<<"iteration "<< num<<' '<<ans[counter]<<' '<<res<<' ';
        if(bits[counter] == 0){
            if(res == 1){
                return false;
            }

        }
        tmp[counter] = res;
        counter++;
        num = num/2;
    }
    for(int i=0;i<32;i++){
        ans[i] = tmp[i];
    }
    //cout<<"bruh\n";
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        stack<ll> a,b,c;
        stack<ll> tmp;
        ll inp;
        for(ll i=0;i<n;i++){
            cin>>inp;
            tmp.push(inp);
        }
        while(!tmp.empty()){
            a.push(tmp.top());
            tmp.pop();
        }
        for(ll i=0;i<n;i++){
            cin>>inp;
            tmp.push(inp);
        }
        while(!tmp.empty()){
            b.push(tmp.top());
            tmp.pop();
        }
        for(ll i=0;i<n;i++){
            cin>>inp;
            tmp.push(inp);
        }
        while(!tmp.empty()){
            c.push(tmp.top());
            tmp.pop();
        }

        setvectorrep(x);
        vector<ll> ans(32,0);
        bool possible = true;
       // for(auto g: bits){
       //     cout<<g;
       // }
        //cout<<'\n';
        bool cana = true, canb = true, canc = true;
        while(possible && !equality(ans))
        {
            // for(auto x: ans){
           //     cout<<x;
           // }
           // cout<<'\n';
           // cout<<a.top()<<' '<<b.top()<<' '<<c.top()<<'\n';
          //  cout<<good(ans,a)<<' '<<good(ans,b)<<' '<<good(ans,c)<<'\n';

            if(cana){
                if(!a.empty()){
                    if(good(ans,a)){
                        a.pop();
                    } else {
                        cana = false;
                    }
                } else {
                    cana = false;
                }
            } else if (canb){
                if(!b.empty()){
                    if(good(ans,b)){
                        b.pop();
                    } else {
                        canb = false;
                    }
                }else {
                    canb = false;
                }
            } else if (canc){
                if(!c.empty()){
                    if(good(ans,c)){
                        c.pop();
                    } else {
                        canc = false;
                    }
                }else {
                    canc = false;
                }
            }
             else {
                possible = false;
            }

           // for(auto x: ans){
           //     cout<<x;
           // }
          //  cout<<'\n'<<equality(ans)<<'\n';
            /*
1
1 9
5
8
0


            */

        }

        if(equality(ans)){
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
        }



    }


    return 0;
}
