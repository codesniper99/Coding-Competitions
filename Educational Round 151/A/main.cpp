#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--) {
        ll n,k,x;
        cin>>n>>k>>x;
        if(k==1){
            cout<<"NO\n";
            continue;
        }

            ll count = 0;
        if(n%2==0){
            cout<<"YES\n";
            if(x==1){
                count = n/2;
                cout<<count<<'\n';
                for(int i=0;i<count;i++){
                    cout<<2<<' ';
                }
                cout<<'\n';
            } else{
                count = n;
                cout<<count<<'\n';
                for(int i=0;i<count;i++){
                    cout<<1<<' ';
                }
                cout<<'\n';
            }
        } else {
            if(k>=3){
                cout<<"YES\n";
            ll count = 0;
            if(x==1){
                count = (n/2)-1;
                cout<<count+1<<'\n';
                for(int i=0;i<count;i++){
                    cout<<2<<' ';
                }
                cout<<3;
                cout<<'\n';
            } else{
                    count = n;
                    cout<<count<<'\n';
                    for(int i=0;i<count;i++){
                        cout<<1<<' ';
                    }
                    cout<<'\n';
                }
            } else {
                if(x==1){
                    cout<<"NO\n";
                } else {
                    count = n;
                    cout<<"YES\n";
                    cout<<count<<'\n';
                    for(int i=0;i<count;i++){
                        cout<<1<<' ';
                    }
                    cout<<'\n';
                }
            }

        }
    }


    return 0;
}
