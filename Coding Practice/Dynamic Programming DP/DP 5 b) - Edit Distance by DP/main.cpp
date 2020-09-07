// BY DYNAMIC PROGRAMMING
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;
int dp[100][100];
int solve(string a, string b, int m, int n)
{

        for(int i=0;i<m;i++)
          for(int j=0;j<n;j++)
           dp[i][j]=0;

if(a[0]==b[0])
    dp[0][0]=0;
    else
        dp[0][0]=1;


 for(int i=1;i<m;i++)
    {

        if(a[i]==b[0])
        {
            dp[i][0]=dp[i-1][0];

        }
        else if(a[i]!=b[0])
        {
            dp[i][0]=dp[i-1][0]+1;
        }


}

 for(int j=1;j<n;j++)
    {
        if(a[0]==b[j])
        {
            dp[0][j]=dp[0][j-1];

        }
        else
        {
            dp[0][j]=dp[0][j-1]+1;
        }

    }

   for(int i=1;i<m;i++)
   {
       for(int j=1;j<n;j++)
       {
           char p=a[i];
           char q=b[j];

           if(p==q)
            dp[i][j]=dp[i-1][j-1];

            else
            {
                dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
            }

       }
   }

   return dp[m-1][n-1];
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        int m = a.length();
        int n = b.length();

        cout<<"Minimum Steps - "<<solve(a,b,m,n)<<'\n';


    }

    return 0;
}
