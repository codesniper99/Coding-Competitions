#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define scanVec(vec , n) for(int i = 0; i < n ; i++){ cin>>vec[i];}
#define printVec(vec , n) for(int i = 0; i < n ; i++){ cout<<vec[i]<<" ";}
#define S second
#define F first
const int  MOD = 1e9 + 7;
const int  N = 1e5 + 7;

int main(){
    ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int> A(n) , B(n);
    for(int i = 0 ; i < n ; i++){
        cin>>A[i];
    }
    multiset<int> s;
    for(int i = 0 ; i < n ; i++){
        cin>>B[i];
        s.insert(B[i]);
    }
    for(int i = 0 ; i < n ; i++){
        auto it = s.lower_bound(n - A[i]);
        if(it == s.end()) it = s.begin();
        int x = *it;
        x = (A[i] + x) % n;
        cout<<x<<" ";
        s.erase(it);
    }
    cout<<endl;



    return 0;
}
