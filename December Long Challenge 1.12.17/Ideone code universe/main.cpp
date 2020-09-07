#include <bits/stdc++.h>
using namespace std;
int X,Y,Z,a,b,c;
int space[100][100][100];
int solve(int x,int y,int z){
	if(x<0||y<0||z<0){
               return INT_MAX-a-b-c;
	}
  	if(space[x][y][z]!=0){
  		return space[x][y][z];
	  }
	else{
		space[x][y][z]=min(solve(x-1,y-1,z-1)+c,min(solve(x-1,y,z)+a,min(solve(x,y-1,z)+a,min(solve(x,y,z-1)+a,min(solve(x-1,y-1,z)+b,min(solve(x,y-1,z-1)+b,solve(x-1,y,z-1)+b))))));
		return space[x][y][z];
	}
}

int main(){
	int t;cin>>t;
	while(t--){

		memset(space,0,sizeof(space));
		cin>>X>>Y>>Z>>a>>b>>c;
		cout<<solve(X,Y,Z)<<endl;
	}

	return 0;
}
