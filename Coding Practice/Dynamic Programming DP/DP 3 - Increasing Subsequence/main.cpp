// recursive
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int solve(int a[], int n,int*max_ref)
{
    if(n==1)
        return 1;

    int max_end_here=1,res;


    for(int i=1;i<n;i++)
    {
        res=solve(a,i,max_ref);
        if(a[i-1]<a[n-1] &&res+1>max_end_here)
            max_end_here=res+1;
    }

    if(*max_ref<max_end_here)
        *max_ref=max_end_here;

    return max_end_here;



}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int* arr;
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
            cin>>arr[i];
      int maxi=1;

      cout<<solve(arr,n,&maxi)<<'\n';



    }

    return 0;
}
