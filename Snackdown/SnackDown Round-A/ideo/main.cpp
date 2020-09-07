#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define li long int

using namespace std;

int main()
 {
        ios::sync_with_stdio(0);
        ll t;
        cin >> t ;
        ll p=1000000007;
	while ( t-- ) {
        ll n,k ;
        ll answer = 1,sum = 0;
        cin>>n>>k ;

        if (k==1)
            {
            cout <<(n*(n-1))%p<<'\n';
            continue ;
        }

        ll least_sum = (((2*n)/k)-k+1)/2 ;

        if (least_sum<=0||n<=k) {
            cout<<-1<<'\n';
            continue ;

        }

        ll difference =  (k *((2*least_sum)+ k - 1))/ 2 ;

        for (ll i = 0;i<k;++i )
            sum += least_sum + i ;

        for (ll i = 0 ;i<k;++i ) {


            if ( i == ( k - n + difference ))
                least_sum++ ;

            answer = ((answer%p)*(((least_sum*least_sum)-least_sum)%p))%p;
            least_sum++ ;

        }
        cout<<answer%p<<'\n';


    }

}
