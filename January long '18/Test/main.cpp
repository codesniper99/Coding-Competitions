#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
#include<string.h>
#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;string ans;
    while(t--)
    {
        ll w,e;
        cin>>w>>e;
        string a,b,c;
        cin>>a;
        cin>>b;


        ll mover_b=0;
        ll mover_a=0;
        ll iterator_b=0;
        ll minimum=99999999;


       while(iterator_b!=b.length() )
     {
         c.clear();

        char of_b=b[iterator_b];
        char of_a=a[0];

        ll length_a= a.length();
        ll length_b=b.length();
        mover_b=iterator_b;
        mover_a=0;
        ll sum=0;


//cout<<length_a<<"k"<<length_b<<"k";
//cout<<"    c- "<<c<<'\n';
 while(mover_b!=length_b && mover_a!=length_a)
        {

            of_a=a[mover_a];
            of_b=b[mover_b];
           //cout<<of_a<<"   of b - "<<of_b;
         //   if(of_a == of_b)
       //         cout<<"YIPPEE\n";
            if(of_a == of_b)
            {
           c+=b[mover_b];

                mover_b++;
     //           cout<<"Assigned 1 "<<c<<'\n';
            }
            else if(of_a!=of_b && mover_a<length_a && mover_b<length_b)
            {
             c+=a[mover_a];
             mover_a++;

   //          cout<<"Assigned2"<<c<<'\n';
         }

        }
 //       cout<<'\n'<<"OUTTTT\n";
//cout<<c<<"\n"<<mover_a<<"k"<<mover_b<<" ";


             if(mover_a==length_a && mover_b <length_b)
            {
                for(ll i=mover_b;i<length_b;i++)
                {

                    c+=b[i];

                }
               mover_b=length_b;
            }

            else if(mover_b==length_b&&mover_a<length_a)
            {
                for(ll i=mover_a;i<length_a;i++)
                {
                    c+=a[i];


                }
               mover_a=length_a;
            }


string g;
g.clear();
          for(ll i=0;i<iterator_b;i++)
                g+=b[i];
g+=c;
        ll length_g=g.length();

        char current=g[0];
        char nexta=g[1];

cout<<"\n Iterator_b - "<<iterator_b<<"  string - "<<g<< '\n';
        for(ll i=1;i<length_g;i++)
            {
                nexta=g[i];
                if(nexta!=current)
                {
                    current=nexta;
                    sum++;
                }
            }

if(sum<minimum)
      {
           minimum=sum;
          ans=g;
     }
     cout<<"   Sum- "<<sum<<" Minimum - "<<minimum<<'\n';
        iterator_b++;
    }

    cout<<ans<<"   "<<minimum+1<<'\n';
    }
    return 0;
}
