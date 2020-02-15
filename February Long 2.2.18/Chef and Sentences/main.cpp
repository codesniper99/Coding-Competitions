// SOLVED

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
    cin.ignore(256,'\n');

    while(t--)
    {
        string q;
        getline(cin,q);
        ll len=q.length();
        char c;

string s;
s.clear();
ll j=0;
        for(ll i=0;i<len;i++)
        {
         if(isalpha(q[i])==0)
         {
          ;
         }
         else
         {  c=q[i];
            s+=tolower(c);
         }
        }

        len=s.length();
       int flag_c=0;
       int flag_h=0;
       int flag_e=0;
       int flag_f=0;


       ll total=0;

        for(ll i=0;i<len-3;i++)
        {
            char c1,c2,c3,c4;
            c1=s[i];
            c2=s[i+1];
            c3=s[i+2];
            c4=s[i+3];
            string d;
            d.clear();
            d=c1;
            d+=c2;
            d+=c3;
            d+=c4;
            if(d=="chef"||d=="chfe"||d=="cehf"||d=="cefh"||d=="cfeh"||d=="cfhe"||d=="hcef"||d=="hcfe"||d=="hecf"||d=="hefc"||d=="hfec"||d=="hfce"||d=="ehcf"||d=="ehfc"||d=="echf"||d=="ecfh"||d=="efch"||d=="efhc"||d=="fhec"||d=="fhce"||d=="fehc"||d=="fech"||d=="fceh"||d=="fche")
             total++;

            else
                continue;



        }




       if(total>0)
        {
            cout<<"lovely "<<total<<"\n";
        }
        else
            cout<<"normal\n";

    }
    return 0;
}
