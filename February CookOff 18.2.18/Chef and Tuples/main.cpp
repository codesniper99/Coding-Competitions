
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

bool isPerfectSquare(long long n){
    long long squareRootN=(long long)round((sqrt(n)));

    if(squareRootN*squareRootN == n) {
        return true;
    }
     else {
        return false;
     }
}
int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,c;
        cin>>n;
        cin>>a>>b>>c;

        vector<ll> divisors;
        for(ll i=1;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                divisors.push_back(i);
                if((n/i)!=i)
                divisors.push_back(n/i);
            }
        }

        ll y=sqrt(n);
        if(isPerfectSquare(n))
            divisors.push_back(y);


        ll z=divisors.size();
        sort(divisors.begin(),divisors.end());


ll x=divisors.size();

        ll endd=divisors.size();

        ll counter=0;
        for(ll i=0;i<endd;i++)
        {
                for(ll j=0;j<endd;j++)
                {
                    if(n%(divisors[i]*divisors[j])==0 && n/(divisors[i]*divisors[j]) <=c && divisors[i]<=a && divisors[j]<=b )
                           {
                        //       cout<<'\n'<<divisors[i]<<' '<<divisors[j]<<' '<<n/(divisors[i]*divisors[j]);
                               counter++;
                           }

                }

        }

        cout<<counter<<'\n';
    }
    return 0;
}
