#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        double total_time=0;
        map<string,double>words;
        words.clear();
       string s;
        for(ll i=0;i<n;i++)
        {
            s.clear();
            cin>>s;
            double timee=0;
            ll state=2;
            ll len=s.size();
            map<string,double>::const_iterator it = words.find(s);

            if(it==words.end())
            {

            for(ll j=0;j<len;j++)
            {



                if(s[j]=='d')
                {
                    if(state==2)
                    {
                        timee+=0.2;
                        state=-1;
                    }
                    else if(state==1)
                    {
                        timee+=0.2;
                        state=-1;
                    }
                    else
                    {
                        timee+=0.4;
                        state=-1;
                    }

                }
                else if(s[j]=='f')
                {
                    if(state==2)
                    {
                        timee=0.2;
                        state=-1;

                    }
                    else if(state==1)
                    {
                        timee+=0.2;
                        state=-1;
                    }
                    else
                    {
                        timee+=0.4;
                        state=-1;
                    }

                    }
                else if(s[j]=='j')
                {

                    if(state==2)
                    {
                        timee+=0.2;
                        state=1;
                    }
                    else if(state==1)
                    {
                        timee+=0.4;
                        state=1;
                    }
                    else
                    {
                        timee+=0.2;
                        state=1;
                    }
                }
                else if(s[j]=='k')
                {
                    if(state==2)
                    {
                        timee+=0.2;
                        state=1;
                    }
                    else if(state==1)
                    {
                        timee+=0.4;
                        state=1;
                    }
                    else
                    {
                        timee+=0.2;
                        state=1;
                    }
                }
                else ;


            }
            words[s]=timee;
            total_time+=timee;
            //cout<<timee<<" ";
            continue;
            }
            else
            {
                total_time+=words[s]/(double)2;
              //  cout<<words[s]/(double)2<<" ";
            }


//cout<<total_time<<" -T";
        }

cout<<total_time*10<<'\n';


    }


    return 0;


}
