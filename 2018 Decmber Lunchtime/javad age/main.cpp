#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>


using namespace __gnu_pbds;

#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;
typedef pair<ll, ll> pi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;


#define EB emplace_back
#define REP(i, x, y) for(long long int i=x ; i<y ; i++)
#define F first
#define PB push_back
#define S second
#define MP make_pair
#define MT make_tuple
#define INF 9999999
#define MOD 1000000007


int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    ll n;
    while(t--)
    {
        cin>>n;
        vi a(n);
        ll sum=0;
        REP(i,0,n){
        cin>>a[i];
        sum+=a[i];
        }
        ll yb,mb,db;
        cin>>yb>>mb>>db;
        ll yc,mc,dc;
        cin>>yc>>mc>>dc;
        ll special=0;
        if(yb==yc && mb==mc&& dc==db)
        {cout<<"0\n";
            continue;}

        ll ans=0;
        ll leapy=0;
        ll normal=0;


        if(yb%4==0 && mb==n&&db==a[mb-1]+1)
        {
           ans=1;
           yb=yb+1;mb=1;
           db=1;special=1;
        }


        REP(i,yb,yc)
        {
            if(i%4==0)
            {
                leapy++;

            }
            else
                normal++;

        }


           if(yb!=yc){ans+=leapy;
            ll days_left_in_byear=0;
            ll days_in_cyear=0;

            REP(i,0,mc-1){

            days_in_cyear+=a[i];
            }
            days_in_cyear+=dc;
            //cout<<days_in_cyear<<"<- dcyear ";
            ans+=days_in_cyear;
            if(yb%4==0)
            {


                days_left_in_byear=a[mb-1]-db;
                if(days_left_in_byear==0)
                    days_left_in_byear++;
                REP(i,mb,n)
                {
                    days_left_in_byear+=a[i];
                }
                days_left_in_byear++;
            }
            else
            {
                days_left_in_byear=a[mb-1]-db;
                REP(i,mb,n)
                {
                    days_left_in_byear+=a[i];
                }

            }

            days_left_in_byear++;
           // cout<<days_left_in_byear<<" <- daysin byear ";
//

                   ans+=days_left_in_byear;
                   ans+=sum*(normal-1+leapy);
             //   cout<<"normal "<<normal<<" "<<leapy;

           }
            else
            {
                if(special==1)
               ans=1;
               else
                ans=0;
                if(mc>mb)
                {ans+=a[mb-1]-db;

                if(a[mb-1]==db)
                {
                    ans++;
                }
                //cout<<ans<<"k";
                REP(i,mb+1,mc)
                {
                    ans+=a[i-1];
                   // cout<<a[i-1];
                    //cout<<ans<<" ";
                }
                ans+=dc;
                }
                else
                {
                    ans+=dc-db;
                }

            }

            //cout<<ans;

            cout<<ans<<'\n';


    }




    return 0;
}
