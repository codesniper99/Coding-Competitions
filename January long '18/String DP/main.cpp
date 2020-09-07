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
    cin>>t;
    while(t--)
    {
        ll w,e;
        cin>>w>>e;
        string a,b,c;
        c.clear();
        cin>>a;
        cin>>b;

        int part=0;
        while(part!=2)
        {
            if(part==1)
            {
                string g;
                g=a;
                a=b;
                b=g;
            }
            cout<<"sa - "<<a<<"  sb- "<<b<<'\n';
            ll mover_b=0;
        ll mover_a=0;
        char of_b=b[mover_b];
        char of_a=a[mover_a];

        ll length_a= a.length();
        ll length_b=b.length();


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


        ll length_c=c.length();
        char current=c[0];
        char nexta=c[1];
cout<<"\n"<<c<<'\n';
        for(ll i=1;i<length_c;i++)
            {
                nexta=c[i];
                if(nexta!=current)
                {
                    current=nexta;
                    sum++;
                }
            }

        cout<<sum+1<<'\n';

        part++;

    }
    }
    return 0;
}
