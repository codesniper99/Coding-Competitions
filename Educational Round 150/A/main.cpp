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
        ll n;
        cin>>n;
        if(n==1){
            cout<<"Alice\n";
        } else if (n==2 || n==3){
            cout<<"Bob\n";
        } else if(n==4){
            cout<<"Bob\n";
        } else {
            cout<<"Alice\n";
        }
    }

    return 0;
}
