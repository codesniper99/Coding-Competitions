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
        cin>>s;
        ll len=s.length();
        vector<ll>pos(len);
        for(ll i=0;i<len;i++)
            pos[i]=0;
         ll flag_bot=1;
          ll flag_top=1;
        for(ll i=0;i<len;i++)
        {
            char c=s[i];
            if(c=='.')
                continue;
            else
            {
                ll x=c-'0';
                ll lower=i-1;
                ll upper=i;
               flag_bot=1;
                while( lower >= i-x && lower>=0 && flag_bot)
                {
                   if(pos[lower]==0)
                     {  pos[lower]++;
                        lower--;
                     }
                    else if(pos[lower]>0)
                    {
                        flag_bot=0;
                        break;

                    }


                }

               flag_top=1;
                while(upper <= i+x && upper<len && flag_top)
                {
                   if(pos[upper]==0)
                     {  pos[upper]++;
                        upper++;
                     }
                    else if(pos[upper]>0)
                    {
                        flag_top=0;
                        break;

                    }


                }

             if(flag_bot==0||flag_top==0)
             {
                 break;
             }
            }

        }
          if(flag_bot==0||flag_top==0)
             {
                 cout<<"unsafe\n";
                 continue;
             }
             else
                cout<<"safe\n";

    }

    return 0;
}
