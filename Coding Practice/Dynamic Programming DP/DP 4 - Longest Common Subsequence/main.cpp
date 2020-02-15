#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int solve(string a,string b,int m,int n)
{
    int dp[m+1][n+1];


    for(int len_a=0;len_a<=m;len_a++)
    for(int len_b=0;len_b<=n;len_b++){
    if(len_a==0||len_b==0)
        dp[len_a][len_b]=0;

    else if(a[len_a-1]==b[len_b-1])
      {
          dp[len_a][len_b]=1+dp[len_a-1][len_b-1];

      }
    else
        {
            dp[len_a][len_b]=max(dp[len_a-1][len_b],dp[len_a][len_b-1]);
        }


}
return dp[m][n];
}

int main()
{
    int t;
    cin>>t;
    while(t--){

    string a,b;
    cin>>a>>b;
    int len_a,len_b;
    len_a=a.length();
    len_b=b.length();




    cout << solve(a,b,len_a,len_b);


    }

    return 0;
}
