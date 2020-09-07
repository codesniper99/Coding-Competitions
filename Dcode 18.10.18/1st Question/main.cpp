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

        ll n,v1,v2;
        ll state=0;//v1
        ll x_coordinate=0,y_coordinate=0;
        string sequence;
        cin>>n>>v1>>v2;
        cin>>sequence;
        for(ll i=0;i<n;i++)
        {
            if(sequence[i]=='N')
            {
                if(state==0)
                {
                    y_coordinate+=v1;
                }
                else
                {
                    y_coordinate+=v2;
                }
            }
            else if(sequence[i]=='W')
            {

                if(state==0)
                {
                    x_coordinate-=v1;
                }
                else
                {
                    x_coordinate-=v2;
                }
            }

            else if(sequence[i]=='E')
            {

                if(state==0)
                {
                    x_coordinate+=v1;
                }
                else
                {
                    x_coordinate+=v2;
                }

            }
            else if(sequence[i]=='S')
            {

                if(state==0)
                {
                    y_coordinate-=v1;
                }
                else
                {
                    y_coordinate-=v2;
                }

            }
            else
            {
                if(state)
                    state=0;
                else
                    state=1;
            }

        }
       // cout<<x_coordinate<<" "<<y_coordinate<<'\n';
x_coordinate=abs(x_coordinate);
y_coordinate=abs(y_coordinate);
char answer;

        if(x_coordinate >= y_coordinate)//black
        {
           if(x_coordinate %2 == 0)//black
                {
                    answer='B';
                }
                else
                {
                    answer='W';
                }
        }
        else
        {
            if((y_coordinate-x_coordinate)%2==0)
            {
                if(x_coordinate%2==1)
                answer='W';
                else
                    answer='B';
            }
            else
            {

                if(x_coordinate%2==1)
                  answer='B';
                else
                    answer='W';
            }
        }
    cout<<answer<<'\n';
    }


    return 0;
}
