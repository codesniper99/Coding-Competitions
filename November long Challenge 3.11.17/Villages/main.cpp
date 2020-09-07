
// SOOOOOLVED
#include <iostream>
#include<stdio.h>
#include<vector>
#include<string>
#define ll long long int

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b;
        a=0;b=0;
        string s;
        cin>>s;
        ll len=s.length();
        char left; left='x';
        char right;right='x';

                for(ll i=0;i<len;i++)
        {  left='x';
             right='x';
            if(s[i]=='A')
                {a++;continue;}
            else if(s[i]=='B')
                {b++;continue;}
            else
            { if(i!=0&&i!=len-1)
                {for(ll j=i-1;j>=0;j--)
                {
                     if(s[j]!='.')
                      {left=s[j];break;}
                }
                for(ll j=i+1;j<len;j++)
                {
                    if(s[j]!='.')
                    {right=s[j];break;}
                }
                if(left==right)
                {   if(left=='x')
                   continue;
                    if(left=='A')
                        a++;
                    else if(left=='B')
                        b++;
                }
              }
                else
                    continue;
            }

        }
        printf("%lld %lld \n",a,b);
    }
    return 0;
}
