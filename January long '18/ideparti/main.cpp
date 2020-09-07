

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> x >> n;
        string s = "impossible";
        int flag=0;
        ll sum = (n*(n+1))/2 - x;
        if(sum%2!=0)
            cout << s << endl;
        else if(n==1||n==2||n==3)
        {
            cout << s << endl;

        }

        else{

            vector<ll> v(n+1,0);
            v[x] = 2;

            sum=sum/2;

            ll part_sum=0;

            ll mover = n;
            if(mover==x)
                mover = n-1;
            if(mover>sum)
                cout << s << endl;
            else
            {
            while(mover>0 && part_sum<sum){
                if(mover==x){
                    mover--;
                    continue;
                }
                    else{
                        part_sum+=mover;
                        if(part_sum>sum){
                            ll diff = part_sum-sum;
                            part_sum-=mover;
                            if(mover-diff>0&&mover-diff!=x)
                            {
                                mover-=diff;
                                part_sum+=mover;
                                v[mover] = 1;
                                break;
                            }
                            else if(mover-diff==x)
                            {
                              v[mover+1]=0;
                              part_sum-=v[mover+1];
                              part_sum+=v[mover];
                            }
                        }
                        v[mover] = 1;
                        mover--;
                    }
                }
                if(part_sum==sum){
                    for(ll i=1;i<=n;i++){
                        cout << v[i];
                    }
                    cout << endl;
                }else{

                    cout << part_sum << endl;
                }
            }
        }
    }
}
