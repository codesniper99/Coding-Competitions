//SOOOOOOOOOOLVEDDDDDDDDDDD :D
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;
/*
string s;
ll n;

void maker()
{
    n=rand()%1000;
    ll cha;
    cha=rand()%2;
    s.clear();
    ll len=rand()%1001;
    for( ll i=0;i<len;i++)
    {
        cha=rand()%2;
        if(cha==0)
            s+='a';
        else if(cha==1)
            s+='b';
    }
    s+='\0';

}

ll solver()
{
    ll no_of_a=0,no_of_b=0;
    ll len=s.length();
    len =len-1;
    ll counter=0;
    ll j=0;
    for(ll i=0;i<n*len;i++)
    {
         j=i%len;
        if(s[j]=='a')
            no_of_a++;
        else if(s[j]=='b')
            no_of_b++;

        if(no_of_a>no_of_b)
        counter++;

    }
    return counter;
}*/
int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n;
        cin>>n;
        //maker();
        ll result=0;
        ll no_of_a=0,no_of_b=0;
        ll len=s.length();
        vector<ll> deviations(len);
        vector<ll>rough(len);
        vector<ll> sorted_deviations(len);
        vector<ll>third(len);
        //cout<<len;
        ll positives=0;
        //len=len-1;
        for(ll i=0;i<len;i++)
        {
            if(s[i]=='a')
                no_of_a++;
            else if(s[i]=='b')
                no_of_b++;

            deviations[i]=no_of_a-no_of_b;

            if(deviations[i]>0)
                {positives++;}

            sorted_deviations[i]=deviations[i];
            rough[i]=deviations[i];
            third[i]=deviations[i];
        }

        sort(sorted_deviations.begin(),sorted_deviations.end());

        ll maxi=sorted_deviations[len-1];
        //cout<<maxi;
        //cout<<maxi<<deviations[0]<<deviations[len];
        ll mini=sorted_deviations[0];
        //cout<<mini<<" ";
        ll end_deviation=no_of_a-no_of_b;
        //cout<<"END - "<<end_deviation<<"  ";
        // case 1 . end deviation=0
        ll answer=0;


        if(end_deviation==0)
        {
            answer=positives*n;
            result=answer;
        }

        // case 2. end deviation is negative -ve
        else if(end_deviation<0)
        {
            ll counter=0;
           // cout<<"k"<<maxi<<"k"<<end_deviation<<"k"<<positives;
            ll time_to_reach=ceil(double(maxi)/double((-end_deviation)));
           // cout<<"k"<<time_to_reach<<"g";
            //cout<<ceil(13/(-(-7)));
            for(ll i=0;i<time_to_reach && n>=time_to_reach;i++)
            {
                for(ll j=0;j<len;j++)
                {
                    if(rough[j]>0)
                        counter++;
                    rough[j]=rough[j]+end_deviation;
                }


            }
            if(n<time_to_reach)
            {
              for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<len;j++)
                {
                    if(rough[j]>0)
                        counter++;
                    rough[j]=rough[j]+end_deviation;
                }


            }

            }
            if(time_to_reach!=0)
                result=counter;
            else
                result=positives;

        }


        // case 3 end deviation is positive +ve
        else if(end_deviation>0)
        {
           ll counter=0;
           //time to reach zero for mini
            ll time_to_reach=ceil(double(-mini)/double(end_deviation));

            for(ll i=0;i<time_to_reach+1 && n>=time_to_reach+1;i++)
            {
                for(ll j=0;j<len;j++)
                {

                    if(third[j]>0)
                        counter++;
                     third[j]=third[j]+end_deviation;

                }
            }
            if(n<time_to_reach+1)
            {

            for(ll i=0;i<n ;i++)
            {
                for(ll j=0;j<len;j++)
                {

                    if(third[j]>0)
                        counter++;
                     third[j]=third[j]+end_deviation;

                }
            }
            }
            if(n>1)
          {
              if(n>time_to_reach)
            counter=counter+ (n-time_to_reach-1)*len;
         result=counter;
          }
          else if(n==1)
            result=positives;

        }
  else
            ;

          //   cout<<"----------------------\n STRING - "<<s<<'\n'<<"n - "<<n;
            //cout<<"\nBRUTE - "<<solver()<<'\n';
//            cout<<deviations[0]<<deviations[1]<<deviations[2]<<deviations[3]<<deviations[4];
            //cout<<"SOLVED - "<<result<<'\n';
            //if(solver()!=result)
              //  cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
            //cout<<"----------------------\n";
            cout<<result<<'\n';
    }

    return 0;
}
