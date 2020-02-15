#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int tc[5001][5001][2];
  ll length_a,length_b;


inline int minCost(string a,string b,ll iterator_a, ll iterator_b, int last)
{
    if(iterator_a==length_a&&iterator_b==length_b)
        return 0;

    char last_char;

    if(last==0)
      last_char=a[iterator_a-1];

    else
        last_char=b[iterator_b-1];


    if(iterator_a==length_a)
    {
        if(b[iterator_b]==last_char)
        {
            return tc[iterator_a][iterator_b][last]=minCost(a,b,iterator_a,iterator_b+1,1);

        }
        else
        {
            return tc[iterator_a][iterator_b][last]=minCost(a,b,iterator_a,iterator_b+1,1)+1;
        }



    }

    else if(iterator_b==length_b)
    {
        if(a[iterator_a]==last_char)
        {
            return tc[iterator_a][iterator_b][last]=minCost(a,b,iterator_a+1,iterator_b,0);

        }
        else
        {
            return tc[iterator_a][iterator_b][last]=minCost(a,b,iterator_a+1,iterator_b,0)+1;
        }

    }

    else
        {
            if(tc[iterator_a][iterator_b][last]!=-1)
                return tc[iterator_a][iterator_b][last];


          if(last_char==a[iterator_a])
          {
            return tc[iterator_a][iterator_b][last]=minCost(a,b,iterator_a+1,iterator_b,0);


          }
          else if(last_char==b[iterator_b])
           {
               return tc[iterator_a][iterator_b][last]=minCost(a,b,iterator_a,iterator_b+1,1);
           }

          else
          {int temp1=INT_MAX;
              temp1= min(temp1,minCost(a,b,iterator_a+1,iterator_b,0)+1);
              ll q = min(temp1,minCost(a,b,iterator_a,iterator_b+1,1)+1);
              return tc[iterator_a][iterator_b][last]=temp1;
          }
        }




}


int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {

        cin>>length_a>>length_b;
        string a,b;
        cin>>a>>b;
        length_a++;
         for(int i=0;i<5001;i++)
            for(int j=0;j<5001;j++)
              for(int k=0;k<2;k++)
                tc[i][j][k]=-1;

                a="&"+a;

       cout<<minCost(a,b,1,0,0)<<'\n';

    }


return 0;
}
