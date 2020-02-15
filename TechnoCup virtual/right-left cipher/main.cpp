#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
     ios::sync_with_stdio(0);
     string t;
     cin>>t;
     ll len=t.size();

     if(len%2==1)
     {
         string s;
         s="";

         ll frontt=0, backk=len-1;
         while(frontt<backk)
         {
             s+=t[frontt];
             s+=t[backk];
             backk--;
             frontt++;


         }
         s+=t[frontt];
         ll len2=s.length();
         for(ll i=len2-1;i>=0;i--)
            cout<<s[i];


     }
     else
     {string s;

         ll frontt=0, backk=len-1;
         s="";
         while(frontt<backk)
         {
             s+=t[backk];
             s+=t[frontt];
             frontt++;
             backk--;

         }
ll len2=s.length();
         for(ll i=len2-1;i>=0;i--)
            cout<<s[i];
         }

    return 0;
}
