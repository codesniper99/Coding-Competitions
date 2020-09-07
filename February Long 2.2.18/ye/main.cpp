#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
     ll t;
     cin>>t;
     while(t--)
     {
         string s;
         string ans;
        cin>>s;
         ll len=s.length();
         ll alpha[26];

        for(ll i=0;i<26;i++)
            alpha[i]=0;

         for(ll i=0;i<len;i++)
         {
             alpha[int(s[i]-'a')]++;
         }


         // CHECK IF POSSIBLE

         int flag1=0;
         for(int i=0;i<26;i++)
         {
             if(alpha[i]%2==1)
             {
                 flag1++;
                 if(flag1>=2)
                 {
                   break;
                 }
             }
         }
         if(flag1>=2)
         {
             cout<<"-1\n";
             continue;
         }

         if(len%2==1)
         {

          vector<ll>answer(len);
          int digi=-1;
          for(int i=0;i<26;i++)
          {
              if(alpha[i]%2==1)
                digi=i;
          }

           ll alphapos[26];

           ll counter=1;
           for(int i=0;i<26;i++)
            alphapos[i]=0;

          for(ll i=0;i<len;i++)
          {
            if(int(s[i]-'a')==digi)
            {
                answer[i]=len/2+1;
                digi=-1;

            }
               else if(alphapos[int(s[i]-'a')]==0 ||alphapos[int(s[i]-'a')]==-1 )
               {
                   answer[i]=counter;
                   alphapos[int(s[i]-'a')]=counter;
                   counter++;
               }
               else if(alphapos[int(s[i]-'a')]>0)
               {
                   answer[i]=len-alphapos[int(s[i]-'a')]+1;
                   alphapos[int(s[i]-'a')]=-1;

               }

          }
                   for(ll i=0;i<len;i++)
                     cout<<answer[i]<<' ';
                     cout<<'\n';
         }




         else if(len%2==0)
         {
           vector<ll>answer(len);
           ll alphapos[26];

           for(int i=0;i<26;i++)
            alphapos[i]=0;

            ll counter=1;
           for(ll i=0;i<len;i++)
           {
               if(alphapos[int(s[i]-'a')]==0 ||alphapos[int(s[i]-'a')]==-1 )
               {
                   answer[i]=counter;
                   alphapos[int(s[i]-'a')]=counter;
                   counter++;
               }
               else if(alphapos[int(s[i]-'a')]>0)
               {
                   answer[i]=len-alphapos[int(s[i]-'a')]+1;
                   alphapos[int(s[i]-'a')]=-1;

               }
           }
           for(ll i=0;i<len;i++)
            cout<<answer[i]<<' ';
           cout<<'\n';
         }

     }
    return 0;
}
