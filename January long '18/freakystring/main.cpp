#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll length_a=5000,length_b=5000;
ll tc[5001][5001];

string findC(string a,string b, ll r, ll c)
{
    string y;

    ll i=0,j=0;

    while(i!=r && j!=c)
    {
        ll rightway=tc[i+1][j];
        ll downway=tc[i][j+1];

        if(downway>rightway)
            {
                y+=b[i+1];
                i++;
            }
        else if(rightway>downway)
            {
                y+=a[j+1];
                j++;
            }
        else
            {
                y+=b[i+1];
                i++;
            }



    }
    return y;

}

string removeConsecutiveDuplicates(string s)
{
    string sAnswer;
    sAnswer+=s[0];  //start with first character...
    for (int i=1;i<s.length();i++) {
        if (s[i]==s[i-1]) { //duplicate so skip over
        }
        else {
            sAnswer += s[i];
        }
    }

    return sAnswer;
}

ll minCost(string a,string b)
{
     ll i, j;

     char previous,next;
     char up,down;
     tc[0][0] = 0;

 if(length_a>1)
     /* Initialize first column of total cost(tc) array */
    {
        for (i = 1; i <= length_a; i++)
        {
            previous =a[i-1];
            next=a[i];
            if(next==previous)
            tc[i][0] = tc[i-1][0];

            else
                tc[i][0]=tc[i-1][0]+1;
        }
    }
    else
        tc[1][0]=1;

     /* Initialize first row of tc array */
     if(length_b>1)
     {for (j = 1; j <= length_b; j++)
        {
            previous=b[j-1];
            next=b[j];

             if(next==previous)
              tc[0][j] = tc[0][j-1];
            else
                tc[0][j]=tc[0][j-1]+1;
        }
     }
     else
        tc[0][1]=1;

char construct;
string c;

for (i = 1; i <= length_a; i++)
        {

            for (j = 1; j <= length_b; j++)
            {

                ll aq=tc[i-1][j];
                ll bq=tc[i][j-1];

                char present_column=b[j];
                char present_row=a[i];
                char previous_column=b[j-1];
                char previous_row=a[i-1];

             if(present_column==present_row )
                {
                    if(i==length_a &&j==length_b)
                    {
                    string c;
                    ll len=c.length();
                    c=findC(a,b,i,j);
                    cout<<c<<"k";
                    cout<<c[len];

                    if(present_column != c[len])
                        tc[i][j]=min(aq,bq)+1;
                    else
                        tc[i][j]=min(aq,bq);
                     }
                    else
                        tc[i][j]=max(aq,bq);

                }
                    else
                {
                    tc[i][j]=min(aq+1,bq+1);

                }

       }
}

cout<<'\n'<<"Start\n";
  for(ll i=0;i<=length_a;i++)
   {
    for(ll j=0;j<=length_b;j++)
      cout<<tc[i][j]<<' ';
    cout<<'\n';
    }
    cout<<"END\n";

     return tc[length_a][length_b];
}

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;string ans;
    while(t--)
    {
        cin>>length_a>>length_b;
        string af,bf,c;
        cin>>af;
        cin>>bf;
        ll down_index=0;
        ll right_index=0;

        ll mover_b=0;
        ll mover_a=0;
        string a,b;
        a+="0";
        a+=af;
        b+="0";
        b+=bf;

string as,bs;
as=removeConsecutiveDuplicates(a);
bs=removeConsecutiveDuplicates(b);
   length_b=bs.length()-1;
   length_a=as.length()-1;
//cout<<as<<" "<<bs<<'\n'<<length_b<<" "<<length_a<<'\n';
   cout<< minCost(as,bs);
    cout<<'\n';
    }
   return 0;

}
