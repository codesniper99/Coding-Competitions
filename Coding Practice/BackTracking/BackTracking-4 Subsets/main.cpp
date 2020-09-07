#include<iostream>
#include <stdio.h>
using namespace std;
#define ll long long int
#include<bits/stdc++.h>
ll n;
int flag=0;
int v[1000001];

inline void printSolution(ll A[], ll sizee,int v[])
{

    for(ll i = 0; i < sizee; i++)
    {
        v[A[i]]=1;
    }
    for(ll i=1;i<=n;i++)
    {
        cout<<v[i];
    }

    cout<<'\n';
}



inline void subset_sum(ll s[],ll t[],ll s_size,ll t_size,ll sum,ll ite,ll const target_sum,int v[])
{

    if( target_sum == sum )
    {
        // found sum
if(flag==0)
        {printSolution(t, t_size,v);
        flag=1;}
          return;
    }
    else
    {
        //  check
        if( ite < s_size && sum + s[ite] <= target_sum && flag==0)
        {
            // breadth first nodes generate
            for( ll i = ite; i < s_size; i++ )
            {
                t[t_size] = s[i];

                if( sum + s[i] <= target_sum )
                {
                    // next level node (along depth)
                    subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum,v);
                }
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(0);
     ll t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x >> n;
        string s = "impossible";

        ll sum = (n*(n+1))/2 - x;
        if(sum%2!=0)
            cout << s << endl;
        else if(n==1||n==2||n==3)
        {
            cout << s << endl;

        }
        else{
                flag=0;
                ll target;

          for(ll i=0;i<=n;i++)
            v[i]=0;

          v[x] = 2;
          sum=sum/2;
          target = sum;
          ll weights[n];
          for(ll i=0;i<n-1;i++)
          {
              if(i>=x-1)
               weights[i]=i+2;
              else
                weights[i]=i+1;

          }

    ll tuplet_vector[n-1];
    ll total = 0;

       subset_sum(weights, tuplet_vector, n-1, 0, 0, 0, target,v);

        }
    }

    return 0;
}
