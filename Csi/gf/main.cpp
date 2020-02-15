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

    string a,b;
    cin>>a>>b;
    ll ops=0;
    ll siz=a.length();
    for(ll i=0;i<siz;i++)
        {
        char d=a[i];
        char c=b[i];
        char first_char_p=(d+13)%26;
        char second_char_p=(c+13)%26;

        cout<<c<<" "<<d<<" "<<c-d<<'\n';

        if(abs(c-d)<13 )
        {
            if((c-d) >= 0)
            ops+=c-d;
            else
            {
                ops+=13-abs(c-d)+1;
            }

        }
        else if(abs(c-d)==13)
        {
            ops+=1;

        }
        else
        {
            if((c-d)>0)
                  ops+=(c-d)-(int((c-d)/13)*13) +1;

              else
            {


            }

        }
        cout<<ops<<" ";
    }
    cout<<ops<<'\n';

}

    return 0;
}
