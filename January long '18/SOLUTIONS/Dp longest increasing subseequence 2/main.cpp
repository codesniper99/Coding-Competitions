//DYNAMIC PROGRAMMING
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int solve(int a[], int n)
{
    int i,j;
    vector<int>aux(n);

    for(i=0;i<n;i++)
        aux[i]=1;

    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i])
            aux[i]=max(1+aux[j],aux[i]);
        }
    }
    int maxi=-9999;
    for(i=0;i<n;i++)
    {
        if(aux[i]>maxi)
            maxi=aux[i];
    }
    for(i=0;i<n;i++)
        cout<<aux[i]<<" ";
return maxi;
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
    cout<<"Maxi - "<< solve(arr,n)<<'\n';
    }

    return 0;
}
