#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;
int main() {

    ios::sync_with_stdio(0);

    ll t;
    cin >> t;

    while (t--)
        {
        ll   n, m, k, l;
        cin>>n>>m>>k>>l;
        ll arra[n + 1];


        for ( ll i = 0; i< n; i++) {
            cin >> arra[i];
        }
       ll pos=0;
        arra[n] = 0;
        sort(arra, arra + n + 1);

        ll arra2[n];
        ll flag=0;
        // cumulative diff
        for (ll i = 0; i < n; i++) {
                flag=1;
            arra2[i] = arra[i + 1] - arra[i] - l;
        }

        ll  maximum = arra2[0];
        //maxx
        ll  indice = 0;
        for ( ll i = 1; i < n; i++) {
                //cumulative summm
            arra2[i] += arra2[i - 1];
            if (arra2[i] > maximum)
            {
                maximum = arra2[i];
                indice = i;
            }
        }
        ll   var = (k - arra[n]) + arra2[n - 1];

        maximum = max(var,maximum);
        ll  time_needed = ((m*l) - maximum);
        if (time_needed < 0) {
            cout << k <<'\n';
        }
        else {
            cout << time_needed - l<< '\n';
        }
    }
    return 0;
}
