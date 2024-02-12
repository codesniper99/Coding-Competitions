#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<pair<char,char>, int> melodies;
        int ans=0;
        if(n<=2) {
            cout<<1<<'\n';
            continue;
        }
        melodies[{s[0], s[1]}]=1;
        ans++;
        int i=2;
        while(i<n) {
            char first_char = s[i];
            if(!melodies[{s[i-1],s[i]}]) {
                melodies[{s[i-1],s[i]}]=1;
                ans++;
            }
            i++;
        }

        cout<<ans<<'\n';
    }

    return 0;
}
