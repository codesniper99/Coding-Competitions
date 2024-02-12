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
        ll a,b;
        cin>>a>>b;
        if(a>1){
            cout<<1<<'\n';
            continue;
        }
        else {
                if(b>2)
                    cout<<2<<'\n';
                else
                    cout<< 3<<'\n';
        }
    }


    return 0;
}
