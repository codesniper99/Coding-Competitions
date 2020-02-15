#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long int

using namespace std;

int main()
{ // SOOOOOOOOLVED
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   scanf("%d",&t);
   while(t--)
   {

       ll n,p;
       scanf("%lld %lld",&n,&p);
       vector<char> a(n);
       for(ll i=0;i<n;i++)
        a[i]='a';
       if(p==1)
       { printf("impossible\n");continue;
       }



       if(n==2)
         { printf("impossible\n");continue;
       }
       if(p==2)
         { printf("impossible\n");continue;
       }
       else
       { if(n==p)
              {
                    a[0]='b';
                      a[n-1]='b';

              for(ll i=0;i<n;i++)
                printf("%c",a[i]);
                printf("\n");
                }
              else
                {
                ll x=n/p;
                 vector<char> group(p);
                 for(ll i=0;i<p;i++)
                    group[i]='b';
                 group[0]='a';
                 group[p-1]='a';

                 for(ll c=0;c<x;c++)
                 {
                     for(ll c=0;c<p;c++)
                        printf("%c",group[c]);
                 }
              }
                printf("\n");
       }
   }
    return 0;
}
