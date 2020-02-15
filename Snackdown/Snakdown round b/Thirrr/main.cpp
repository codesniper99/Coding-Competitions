
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int



using namespace std;
#define ll long long


int main() {
    ll t;
    cin >> t;


    while (t--) {

    ios::sync_with_stdio(0);


        ll   n, m, k, l;

        cin >> n >> m >> k >> l;
        ll  arra[n + 1];
        for (ll i = 0; i < n; i++) {
            cin >> arra[i];
        }
        arra[n] = 0;
        sort (arra, arra + n + 1);


        ll flag= 0;
        ll pos=0;

        ll  arra2[n];
        //cumulative sum
        for (ll i = 0; i < n; i++)
        {
            arra2[i] = arra[i + 1] - arra[i] - l;
        }
        ll  maximum = arra2[0];
        ll  indice = 0;

        for (ll i = 1; i < n; i++)

        {
            arra2[i] += arra2[i - 1];
            if (arra2[i] > maximum)
            {
                maximum = arra2[i];
                indice= i;
            }
        }

        maximum += l;

        ll var= (k - arra[n]) + arra2[n - 1];


        maximum = max(var, maximum);
// time required
ll fla2=0;
ll ax=fla2++;
        ll time_required = ((m * l) - maximum) + l;


        if (time_required < 0)
            {
            cout << l <<'\n';
        }
        else
         {
            cout << time_required << '\n';
        }
    }
}
