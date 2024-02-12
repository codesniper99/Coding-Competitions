#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
//AAA
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll b, c,h;
        cin>>b>>c>>h;
        ll ans;

        vector<ll> s;
        ll flag = 1;
        while(1){
            if(flag ==2){
                if(c || h){
                        if(c){
                            ans++;
                        s.push_back(2);
                        c--;
                        } else {
                        ans++;
                        s.push_back(3);
                        h--;
                        }

                } else {
                    break;
                }
                flag = 1;
            }
            else {
                if(b){
                    ans++;
                    s.push_back(1);
                    b--;
                } else {
                    break;
                }
                flag = 2;

            }


        }

        ans = s.size();
        ll cnt = 0;
        for(ll i=s.size()-1;i>=0;i--){
            if(s[i]!=1){
                cnt++;

            } else {
            break;}
        }

        cout<<ans-cnt<<'\n';

    }


    return 0;
}
