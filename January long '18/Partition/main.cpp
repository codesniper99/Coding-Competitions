// SOOOOOOOLVED !!!!!!!!!!!

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

        else if((n-2)%4==0 && x == 1)
        {


        cout<<"211010";
            for(ll i=7;i<=n;i+=4)
            {
                cout<<"1001";

            }


             cout<<'\n';



        }
        else if((n-3)%4==0 && x==2)
        {

            cout<<"1211100";
            for(ll i=8;i<=n;i+=4)
            {
              cout<<"1001";
            }



             cout<<'\n';




        }
        else{

            vector<ll> v(n+1,0);
            v[x] = 2;

            sum=sum/2;

            ll l_sum=0,r_sum=0;

            ll mover = n;

            if(mover==x)
                mover = n-1;

            if(mover>sum)
                cout << s << endl;

             while(mover > 0 )
             {
                 if(mover==x)
                    {
                        mover--;
                        continue;
                    }
                 if(l_sum > r_sum)
                 {
                     r_sum+=mover;
                     v[mover]=1;
                     mover--;

                 }
                 else if(l_sum < r_sum)
                 {
                     l_sum+=mover;
                     mover--;
                 }
                 else
                 {
                     l_sum+=mover;
                     mover--;
                 }

             }

             for( ll i=1;i<=n;i++)
                cout<<v[i];
             cout<<'\n';


            }
    }
}
