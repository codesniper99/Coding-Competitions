// RECURSIVE
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int solve(string a, string b, int m, int n)
{
   if(m==0||n==0)
    return max(m,n);

   char p,q;
   p=a[m-1];
   q=b[n-1];

   if(p==q)
   {
       return solve(a,b,m-1,n-1);

   }
   else if(p!=q)
   {
       return min(solve(a,b,m,n-1)+1,min(solve(a,b,m-1,n)+1,solve(a,b,m-1,n-1)+1));
   }


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
