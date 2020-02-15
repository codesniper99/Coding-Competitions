#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll length_a=5000,length_b=5000;
int cost_down[5001][5001];
int cost_right[5001][5001];
ll tc[5001][5001];
int min(int x, int y, int z);

ll minCost(string a,string b)
{
     int i, j;

     // Instead of following line, we can use int tc[m+1][n+1] or
     // dynamically allocate memoery to save space. The following line is
     // used to keep te program simple and make it working on all compilers.
          char previous,next;
     char up,down;
     tc[0][0] = 0;
if(length_a>1)
     /* Initialize first column of total cost(tc) array */
    {
        for (i = 1; i <= length_b; i++)
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
     /* Construct rest of the tc array */
     for (i = 1; i <= length_a; i++)
        {

            for (j = 1; j <= length_b; j++)
            {
                ll aq=tc[i-1][j];
                ll bq=tc[i][j-1];

                char previous_column=a[j-1];
                char present_column=a[j];
char previous_row=b[i-1];
char present_row=b[i];

       tc[i][j]=min(tc[i-1][j]+cost_down[i-1][j],tc[i][j-1]+cost_right[i][j-1]);


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

/* A utility function that returns minimum of 3 integers */
/*int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}
*/
/* Driver program to test above functions */

void display()
{
    for(ll i=0;i<=length_a;i++)
    {
        for(ll j=0;j<=length_b;j++)
            cout<<cost_right[i][j]<<' ';
        cout<<'\n';
    }
}

void display_down()
{
    for(ll i=0;i<=length_a;i++)
    {
        for(ll j=0;j<=length_b;j++)
            cout<<cost_down[i][j]<<' ';
        cout<<'\n';
    }
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

//cout<<a<<" "<<b<" l";
char previous,next,present;
  /* Initialize first column of total cost_down(tc) array */
     for (ll i = 0; i < length_a; i++)
        {


            present = a[i];
            next=a[i+1];
            if(next==present)
             {
                     for(ll j=0;j<=length_b;j++)
                         cost_down[i][j] = 0;
             }
            else
             {
                    for(ll j=0;j<=length_b;j++)
                         cost_down[i][j] = 1;
             }

        }


         for(ll i=0;i<=length_b;i++)
            cost_right[length_a][i]=0;
        cost_down[0][0]=0;

  /* Initialize first column of total cost_right(tc) array */
     for (ll i = 0; i < length_b; i++)
        {

            present = b[i];
            next=b[i+1];
            if(next==present)
             {
                 for(ll j=0;j<=length_a;j++)
                   cost_right[j][i] = 0;
             }
            else
            {for(ll j=0;j<=length_a;j++)
                 cost_right[j][i] = 1;
             }
            }

         for(ll i=0;i<=length_a;i++)
            cost_right[i][length_b]=0;

        cost_right[0][0]=0;
        display();
        cout<<"\nDown\n";

        display_down();
    cout<< minCost(a,b);
    cout<<'\n';
   // display();
    }
   return 0;

}
