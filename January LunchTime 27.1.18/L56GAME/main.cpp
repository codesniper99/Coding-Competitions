//SOOLVED

#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
   ios::sync_with_stdio(0);
   int t;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++)
        cin>>a[i];
    int odd=0,even=0;

     for(int i=0;i<n;i++)
     {

         if(a[i]%2==0)
            {even++;}
         else
            odd++;
     }
     int l=0,r=0;
     if(odd%2==1)
        l=1;
     else if(odd==0)
        l=-1;
        else
            l=0;

     if( even==0)

         {if(l==1)
         {
             cout<<"2\n";

         }
         else if(l==0)
            cout<<"1\n";

        }

        else if(odd==0)
        cout<<"1\n";
     else
     {
         if(l==1)
         {
             cout<<"2\n";

         }
         else if(l==0)
            cout<<"1\n";


     }


   }

    return 0;
}
