#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll calcVal(string s){
    ll ans = 0;
    ll n = s.size();
    char biggestVal  = 'A';
    for(int i=n-1;i>=0;i--){
            //cout<<biggestVal<<' '<<s[i]<<' ' <<ans<<'\n';
        if(s[i]>=biggestVal) {
            switch(s[i]){
            case 'A':
            ans+=1;break;
            case 'B':
                ans+=10;break;
            case 'C':
                ans+=100;break;
            case 'D':
                ans+=1000;break;
            case 'E':
                ans+=10000;break;
            }
            biggestVal = s[i];
        }
        else {
            switch(s[i]){
                case 'A':
            ans-=1;break;
            case 'B':
                ans-=10;break;
            case 'C':
                ans-=100;break;
            case 'D':
                ans-=1000;break;
            case 'E':
                ans-=10000;break;
            }
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll i =0,n=s.size();
        ll biggestNegative = 0;

        while(i<n && s[i]!='E') {
            i++;
            if(s[i] >= s[biggestNegative]){
                biggestNegative = i;
            }
        }
        s[biggestNegative] = 'E';
        cout<<s<<'\n';
        cout<<calcVal(s)<<'\n';

    }


    return 0;
}
