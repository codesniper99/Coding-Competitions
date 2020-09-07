#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll digisum(ll n , ll d,ll count);
 vector<ll> cycle;
 ll x1kacount=0;
 ll x2kacount=0;
 ll fun(ll n,ll d,ll count);
ll add( ll n, ll d, ll count)
{

cout<<count<<" "<<n<<" "<<d<<'\n';
    ll len=cycle.size();
    for(ll i=0;i<len;i++)
    {


        if(cycle[i]== digisum(n+d,d,count+1))
            {

                 return digisum(n,d,count+1);
            }
    }

    if(digisum(n+d,d,count+1)%100!=0)
    {
        ll x=digisum(n+d,d,count+1);

        cycle.push_back(x);

       return fun(x,d,count+1);

    }
    cycle.push_back(digisum(n+d,d,count+1));

    return fun(n+d,d,count+1);



return fun(n+d,d,count+1);

}

ll digisum(ll n , ll d,ll count)
{
    ll x=n;
    //cout<<x;
    ll sum=0;
    while(x)
    {
        sum+=x%10;
        x=x/10;
        //cout<<x<<" ";
    }
    if( (sum%100) == 0)
    {

        cycle.push_back(sum);
        //x1kacount=1;

         return sum;

    }
   else
    return fun(sum,d,count+1);
}

ll fun(ll n,ll d,ll count)
{


    return(min(digisum(n,d,count+1),add(n,d,count+1)));

}

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        x1kacount=0;
        x2kacount=0;
        cycle.clear();
        ll n,d;
        cin>>n>>d;

        ll x1=digisum(n,d,0);
        ll x2= add(n,d,0);
        //cout<<x1;
        //cout<<" "<<x2<<" ";
        cout<<min(x1,x2);
        if(x1<=x2)
            cout<<" "<<x1kacount<<'\n';
            else
                {
                    ll mini=99l;
                    ll j;
                    for(ll i=0;i<cycle.size();i++)
                        {
                            if(cycle[i]<=mini)
                            {
                                mini=cycle[i];
                                j=i;
                            }



                        }
                     cout<<" "<<x2kacount<<'\n';
                }
    }


    return 0;
}
