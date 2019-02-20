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

    ll n;
    cin>>n;
    vi a(n*n);
    ll sizee=n*n;

    REP(i,0,sizee)
    {
        cin>>a[i];

    }

    map<ll,ll>freq_map;
    freq_map.clear();

    REP(i,0,sizee)
    {
        freq_map[a[i]]++;
    }

    if(n%2==0)
    {

                vi nums;
        //even
        //4 multiple
        for(std::map<ll,ll>::iterator it=freq_map.begin(); it!=freq_map.end(); ++it)
        {
            if((it->second)%4!=0)
            {
                cout<<"NO\n";
                return 0;
            }
            else
            {
                for(ll i=(it->second/4)-1;i>=0;i--)
                    nums.push_back(it->first);

            }


        }

        ll submatrice[n/2][n/2];
        ll counter=0;

        ll len=nums.size();

        cout<<"YES\n";
        REP(i,0,n/2)
        {
            REP(j,0,n/2)
            {
                submatrice[i][j]=nums[counter];
                counter++;

            }
        }

        REP(i,0,n/2)
        {

            REP(j,0,n/2)
            {

                cout<<submatrice[i][j]<<" ";
            }
            REP(j,0,n/2)
            {

                cout<<submatrice[i][n/2-j-1]<<" ";
            }


            cout<<"\n";
        }

         for(ll i=n/2-1;i>=0;i--)
        {

            REP(j,0,n/2)
            {

                cout<<submatrice[i][j]<<" ";
            }
            REP(j,0,n/2)
            {

                cout<<submatrice[i][n/2-j-1]<<" ";
            }


            cout<<"\n";
        }

    }
    else
    {
        vi nums;
        vi doub;
        //even
        ll board[n][n];
        //4 multiple
        ll counnt=0;
        for(std::map<ll,ll>::iterator it=freq_map.begin(); it!=freq_map.end(); ++it)
        {
            if((it->second)%4==0)
            {
                for(ll i=(it->second/4)-1;i>=0;i--)
                    nums.push_back(it->first);

            }
            else if((it->second)%2==0)
            {
                for(ll i=(it->second/2)-1;i>=0;i--)
                    doub.push_back(it->first);

            }
            else
            {
                board[n/2][n/2]=it->first;


            }
        }
        ll submatrice[(n-1)/2][(n-1)/2];
        ll counter=0;

        ll len=nums.size();

        cout<<"YES\n";
        REP(i,0,(n-1)/2)
        {
            REP(j,0,(n-1)/2)
            {
                submatrice[i][j]=nums[counter];
                counter++;

            }
        }

        REP(i,0,(n-1)/2)
        {

            REP(j,0,(n-1)/2)
            {

                cout<<submatrice[i][j]<<" ";
            }
            REP(j,0,(n-1)/2)
            {
                cout<<submatrice[i][(n-1)/2-j-1]<<" ";
            }


            cout<<"\n";
        }

         for(ll i=(n-1)/2-1;i>=0;i--)
        {

            REP(j,0,(n-1)/2)
            {
                cout<<submatrice[i][j]<<" ";
            }
            REP(j,0,(n-1)/2)
            {

                cout<<submatrice[i][(n-1)/2-j-1]<<" ";
            }


            cout<<"\n";
        }










    }




    return 0;
}
