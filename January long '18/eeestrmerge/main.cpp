#include <iostream>
using namespace std;
#define ll long long int
#define MAX_INF 100005

int a[5001][5001];


int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,count=0;
		cin>>n>>m;
		char s1[n],s2[m],x;
		cin>>s1>>s2;
		long long  int i=1,j=0;
		 for(ll i=0;i<=5000;i++)
                 {
                     for(ll j=0;j<=5000;j++)
                        a[i][j]=0;

                 }
		a[1][0]=0;
		a[0][1]=0;

		for(int i=2;i<=n;i++)
		  {
		     if(s1[i-1]!=s1[i])
		       a[i][0]=a[i-1][0]+1;
		  }
	            for(int j=2;j<=m;j++)
	              {
	                 if(s2[j]!=s2[j-1])
	                   a[0][j]=a[0][j-1]+1;
	              }
	             for(int i=1;i<=n;i++)
	             {
	             	for(int j=1;j<m;j++)
	             	{
                             a[i][j]=min(a[i-1][j],a[i][j-1]);

                            if(s1[i]!=s2[j])
                             a[i][j]++;
	             	}
	             }
	             for(ll i=0;i<=n;i++)
                 {
                     for(ll j=0;j<=m;j++)
                        cout<<a[i][j]<<' ';
                        cout<<'\n';
                 }
	            cout<<a[n][m]<<endl;


	}
	return 0;
}
