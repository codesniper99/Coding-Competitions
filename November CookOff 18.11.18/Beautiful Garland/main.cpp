//Solved :DDD
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
        s.clear();
        cin>>s;
        string x;
        x.clear();
        ll len=s.length();


        x=s+s;
        //cout<<x;

        ll max_r=0,max_g=0,now_r=0,now_g=0;
        ll len2=x.length();
       ll last_char=s[0];


      vector<ll>arra;
      char last_c=x[0];
      ll sum=0;
      for(ll i=0;i<len2;i++)
      {
         // cout<<x[i];
          if(x[i]==last_c)
          {
              if(x[i]=='R')
              {

                  sum++;
              }
              else if(x[i]=='G')
              {
                  sum--;
              }

          }
          else
          {
              arra.push_back(sum);
              last_c=x[i];
              i--;
              sum=0;

          }

      }
arra.push_back(sum);

//cout<<"yo\n";

      ll len3=arra.size();
       arra.push_back(arra[0]+arra[len3-1]);
       len3=arra.size();

      for(ll i=0;i<len3;i++)
      {
        //  cout<<arra[i]<<" ";
          if(arra[i]>max_r)
          {
              max_r=arra[i];

          }
          if(arra[i]<max_g)
            max_g=arra[i];

      }

      ll count_r=0;
      ll count_g=0;

      for(ll i=0;i<len3;i++)
      {
          if(arra[i]==max_r)
          {
              count_r++;

          }
          if(arra[i]==max_g)
            count_g++;

      }

         if(max_g<=-3 ||max_r>=3)
         {
             cout<<"no\n";
         }
         else if(max_g==(-len2)+1 || max_r==len2-1)
         {
             cout<<"no\n";
         }
         else if( max_g<0 && max_r>0)
         {
             if(max_g==-1)
             {

                 if(max_r==1 )
                   cout<<"yes\n";
                  else
                  cout<<"no\n";

             }
           else if(max_g==-2)
             {

                 if(max_r==2 && count_g==2 && count_r==2)
                   cout<<"yes\n";
                  else
                  cout<<"no\n";

             }

         }
         else
         {
             cout<<"no\n";
         }


    }

    return 0;
}
