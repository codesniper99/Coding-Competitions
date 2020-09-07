#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     map <int,int > ab;
     int n;
     cin>>n;
     vector<int> a(n);
     for(int i = 0;i<n;i++)
     {
         cin>>a[i];
     }
     int sum=0;
     int maxi=-999;double counter=0;
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             sum=a[i]+a[j];

             if(sum>maxi)
                maxi=sum;

             if(ab.find(sum)==ab.end())
             {
                 ab[sum]=1;
                 counter++;
             }

              else
                {ab[sum]++;
                 counter++;
                }
         }
     }

  //   cout<<ab[maxi]<<"k"<<double(counter);
    double prob = ab[maxi]/counter ;
    cout<<prob<<'\n';
    }
    return 0;
}
