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

        for(int i=0;i<26;i++)
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
                vector<ll>an(len);
                 ll counter=1;

                 ll alphapos[26];
                 for(int i=0;i<26;i++)
                    alphapos[i]=0;

                 int digi;

         for(int i=0;i<26;i++)
         {
             if(alpha[i]%2==1)
             {
                 digi=i;
             }
         }

               for(ll i=0;i<len;i++)
               {

                   if(alpha[int(s[i]-'a')]!=0)
                   {

                    if(int(s[i]-'a')==digi)
                        {

                            an[i]=len/2+1;
                            alpha[int(s[i]-'a')]--;
                        digi=-1;
                        }

                       else if(alpha[int(s[i]-'a')]%2==0)
                       {

                           an[i]=(counter);
                           alphapos[int(s[i]-'a')]=counter;
                           alpha[int(s[i]-'a')]--;
                           counter++;
                        }
                       else
                        {

                           an[i]=len-alphapos[int(s[i]-'a')]+1;
                           alpha[int(s[i]-'a')]--;

                        }

                   }

              }
                for(ll i=0;i<len-1;i++)
                    cout<<an[i]<<' ';

                    cout<<an[len-1];
                cout<<'\n';
             }


         else if(len%2==0)
         {
             int flag=0;
             for(int i=0;i<26;i++)
             {
                 if(alpha[i]%2!=0)
                 {
                     flag=1;
                     break;
                  }
             }

               // not all even
             if(flag==1)
                {cout<<"-1\n";continue;}
            // even no.s all a[i]

             else
             {
                 vector<ll>an(len);
                 ll counter=1;

                 ll alphapos[26];

                 for(int i=0;i<26;i++)
                    alphapos[i]=0;

               for(ll i=0;i<len;i++)
               {
                   if(alpha[int(s[i]-'a')]!=0)
                   {
                       if(alpha[int(s[i]-'a')]%2==0)
                       {
                           an[i]=counter;
                           alphapos[int(s[i]-'a')]=counter;
                           alpha[int(s[i]-'a')]--;
                           counter++;
                        }
                       else
                        {
                           an[i]=len-alphapos[int(s[i]-'a')]+1;
                           alpha[int(s[i]-'a')]--;
                        }

                   }

                }
            for(ll i=0;i<len-1;i++)
              cout<<an[i]<<' ';

              cout<<an[len-1];
              cout<<'\n';
             }


         }

     }
    return 0;
}
