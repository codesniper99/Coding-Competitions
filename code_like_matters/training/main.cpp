#include <bits/stdc++.h>
    using namespace std;

    bool ispossible(vector<tuple<int, int, int> > &v) {
    	for(int i=0; i<v.size(); i++) {
    		int last1 = get<2>(v[i]), last2 = INT_MIN;
    		int curr = get<0>(v[i]);
    		i++;
    		while(get<0>(v[i]) == curr) {
    			if(get<1>(v[i]) > last1) {
    				last1 = get<2>(v[i]);
    			}
    			else if(get<1>(v[i]) > last2) {
    				last2 = get<2>(v[i]);
    			}
    			else
    				return false;
    			i++;
    		}
    		i--;
    	}
    	return true;
    }

    int main() {
    	int T;
    	cin>>T;
    	while(T--) {
    		int n;
    		cin>>n;
    		vector<tuple<int, int, int> > v;
    		for(int i=0; i<n; i++) {
    			int l, r, s;
    			cin>>l>>r>>s;
    			v.push_back(make_tuple(s, l, r));
    		}
    		sort(v.begin(), v.end());
    		if(ispossible(v))
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    	}
    }
