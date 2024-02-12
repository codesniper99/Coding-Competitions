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
        ll q;string ans;
        cin>>q;
        vector<ll> x(q);
        ll threshold , lastbig = -1000000001;
        bool down = false;ll last = 1000000001;
        for(int i=0;i<q;i++){
            cin>>x[i];
            if(i==0){
                threshold = x[0];
                ans+='1';
                lastbig = max(lastbig, x[0]);
            }
            if(i>=1){
                if(!down){
                   if(x[i]<lastbig){
                    if(x[i]<=threshold){
                        down = true;
                        ans+='1';
                        if(x[i]<last && x[i]<=threshold){
                            last = x[i];
                        }
                    } else {
                        ans+='0';
                    }

                   } else {
                        ans+='1';
                        lastbig = x[i];
                    }

                }else {

                    if(x[i]>threshold){
                        ans+='0';
                    } else if (x[i]<last){
                        ans+='0';
                    } else {
                        ans+='1';
                        last = x[i];
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}
