#include <iostream>
#include<stdio.h>
#include<vector>
#include<string>
#define ll long long int


using namespace std;
/*
ll palindrome(string s,int n)
{
    ll l=0;ll mini=9999;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(s[j]==s[])
        }

    }
}

*/
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
      ll n,a;
      scanf("%lld %lld",&n,&a);
     vector<char> group(n);
      ll l=1;
      if(a==1)
      {   char c='a';
          printf("%lld ",n);
          for(ll i=0;i<n;i++)
            printf("%c",c);
            printf("\n");

      }

      else if(a==2)
      {
       for(ll i=0;i<n;i++)
       group[i]='a';

        if(n%2==0)
        {
            for(ll i=1;i<n;i+=n)
                {group[i]='b';
                group[i+1]='b';}
        }
        else
            {for(ll i=0;i<n;i+=n)
             {group[i]='b';group[i+1]='b';}
        group[n-1]='b';
        }

      int sum=1;
      for(ll counter=1;counter<n-1;counter++)
      {
         if(sum==counter)
            sum--;

         l=sum;
         sum++;
      }

        printf("%d ",1);
        for(ll i=0;i<n;i++)
          printf("%c",group[i]);

      printf("\n");

      }

      else{
        int counter=0;
        for(ll i=0;i<n;i++)
        {   if(counter==a)
              counter=0;

            group[i]= 97+counter;
            counter++;
        }

        printf("%d ",1);
        for(ll i=0;i<n;i++)
          printf("%c",group[i]);

      printf("\n");
      }


    }
    return 0;
}
