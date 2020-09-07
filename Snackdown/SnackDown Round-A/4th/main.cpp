#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

int main() {
    int T;
    cin >> T;
    while (T--) {
        ll int  N, M, K, L;
        cin >> N >> M >> K >> L;
        ll int array[N + 1];
        for (int i = 0; i < N; i++) {
            cin >> array[i];
        }
        array[N] = 0;
        sort (array, array + N + 1);

        ll int arrayB[N];
        for (int i = 0; i < N; i++) {
            arrayB[i] = array[i + 1] - array[i] - L;
        }
        ll int max1 = arrayB[0];
        ll int idx = 0;
        for (int i = 1; i < N; i++) {
            arrayB[i] += arrayB[i - 1];
            if (arrayB[i] > max1)
            {
                max1 = arrayB[i];
                idx = i;
            }
        }
        /*for (int i = 0; i < N ; i++) {
            cout << arrayB[i] << " ";
        }*/
        max1 += L;
        //cout << K << endl << array[N] << endl << arrayB[N -1] << endl;
        ll  int temp = (K - array[N]) + arrayB[N - 1];
        //cout << temp << endl;
        max1 = max(temp, max1);
        ll int timereq = ((M * L) - max1) + L;
        if (timereq < 0) {
            cout << L << endl;
        }
        else {
            cout << timereq << endl;
        }
    }
}
