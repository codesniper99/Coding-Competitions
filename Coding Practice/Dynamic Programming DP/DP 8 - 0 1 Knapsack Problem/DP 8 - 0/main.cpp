//BY DP
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int solve(vector<int> values,vector<int> weights,int n,int W)
{
    int dp[n+1][W+1];


    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {

            if(i==0||j==0)
                dp[i][j]=0;

            else if(weights[i-1]<=j)
            {
                dp[i][j]= max(dp[i-1][j],dp[i-1][j-weights[i-1]]+values[i-1]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }


        }
    }


return dp[n][W];



}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      cout<<"\nMax w ?\n";
      int W;
      cin>>W;

      cout<<"Values\n";

      vector<int> values(n);
      vector<int> weights(n);

      for(int i=0;i<n;i++)
        cin>>values[i];

      cout<<"\nWeights - ";

      for(int i=0;i<n;i++)
        cin>>weights[i];
      cout<<"\nAnswer - "<<solve(values,weights,n,W);
      cout<<'\n';

    }

    return 0;
}
