#include <iostream>
#include<bits/stdc++.h>
#define ll __int128

using namespace std;
bool isPerfectSquare(__int128 num) {
    __int128 sqrtNum = sqrtl(num);
    return (sqrtNum * sqrtNum == num);
}
// Custom input function for __int128
istream& operator>>(istream& in, __int128& n) {
    string s;
    in >> s;
    n = 0;
    for (int i = 0; i < s.length(); i++) {
        n = n * 10 + (s[i] - '0');
    }
    return in;
}

// Custom output function for __int128
ostream& operator<<(ostream& out, const __int128& n) {
    if (n == 0) {
        out << 0;
        return out;
    }
    string s = "";
    __int128 num = n;
    if (num < 0) {
        out << '-';
        num = -num;
    }
    while (num > 0) {
        s += (num % 10) + '0';
        num /= 10;
    }
    reverse(s.begin(), s.end());
    out << s;
    return out;
}
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n,tot;
        cin>>n>>tot;
        int side[n];

        ll sum=0;
        ll sqsum = 0;
        for(ll i=0;i<n;i++){
            cin>>sides[i];
            sum+=sides[i];
            sqsum+=sides[i]*sides[i];
        }
        ll a = 4*n;
        ll b = 4*sum;
        ll c = sqsum - tot;
        __int128 discriminant = b * b - 4 * a * c;
        cout<< (ll)(-b + sqrt1(discriminant)) / (2*a)<<'\n';


    }


    return 0;
}
