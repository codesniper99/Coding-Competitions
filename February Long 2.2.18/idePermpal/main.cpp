#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

void findLongestPalindrome(string str)
{
    ll counte[26] = { 0 };

    ll len=str.length();
    for (ll i = 0; i < len; i++)
        counte[str[i]]++;

    ll t=len/2;
    vector<ll>beg(t);
    vector<ll>endel(t);

    ll mid;
    ll counter=1;

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        // if the current character freq is odd
        if (counte[int(ch-'a')]%2==1)
        {
            mid = len/2+1;
            counte[int(ch-'a')--]--;
        }
       else
        {
            for (ll i = 0; i < counte[ch]/2 ; i++)
                {beg.push_back(counter);counter++;}
        }
    }

    for(ll i=0;i<len/2;i++)
    {
        endel[i]=len-beg[i]+1;
    }
                    for(ll i=0;i<t-1;i++)
                    cout<<beg[i]<<' ';

                    cout<<mid;
                    for(ll i=0;i<t-1;i++)
                    cout<<endel[i]<<' ';

                cout<<'\n';



    }

// Driver code
int main()
{
    ios::sync_with_stdio(0);
    long long int t;
    cin>>t;
    while(t--)
    {
     string s;
     cin>>s;
     ll len=s.length();
 ll alpha[26];

        for(int i=0;i<26;i++)
            alpha[i]=0;

         for(ll i=0;i<len;i++)
         {
             alpha[int(s[i]-'a')]++;
         }


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

     findLongestPalindrome(s);


    }
    return 0;
}
