#include<bits/stdc++.h>

#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;
typedef pair<ll, ll> pi;

#define EB emplace_back
#define REP(i, x, y) for(long long int i=x ; i<y ; i++)
#define F first
#define PB push_back
#define S second
#define MP make_pair
#define MT make_tuple
#define INF 9999999
#define MOD 1000000007
#define vi vector<int>
    #define vpii vector<pair<int,int> >
    #define vvi vector<vector<int> >
    typedef long double ld;
    typedef pair<int,int> pii;
    int visited[30][30],r,c;
    vpii ans,finish;

    void solve(int pi,int pj){
    	visited[pi][pj]=1;
    	ans.push_back({pi+1,pj+1});

    	if((int)ans.size()==r*c){
    		finish=ans;
    		return;
    	}
    	for(int i=0;i<r;i++){
    		for(int j=0;j<c;j++){
    			if(!visited[i][j] && pi!=i && pj!=j && (i-j)!=(pi-pj) && (i+j)!=(pi+pj)){
    				solve(i,j);
    			}
    		}
    	}
    }

    int main()
    {
    	int t;
    	cin>>t;
    	for(int k=1;k<=t;k++){
    		//int r,c;
    		cin>>r>>c;
    		for(int i=0;i<r;i++){
    			for(int j=0;j<c;j++){
    				memset(visited,0,sizeof visited);
    				ans.clear();
    				solve(i,j);
    				if((int)finish.size()==r*c){
    					break;
    				}
    			}
    		}

    	if(!finish.size())
    	cout<<"Case #"<<k<<": "<<"IMPOSSIBLE\n";
    	else{
    		cout<<"Case #"<<k<<": "<<"POSSIBLE\n";
    		for(int i=0;i<finish.size();i++)
    			cout<<finish[i].first<<" "<<finish[i].second<<"\n";
    	}
    	finish.clear();
    	}
    return 0;
    }
