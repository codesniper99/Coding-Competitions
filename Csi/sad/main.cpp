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
        char first_char=a[i];
        char second_char=b[i];

        char first_char_p=(first_char-'A'+13)%26 +'A';
        char second_char_p=(second_char+13-'A')%26+'A';
        //cout<<first_char<<" "<<first_char_p<< " "<< second_char<< " "<<second_char_p;


        if((second_char-first_char_p) >0)
        {

            ops+=min((second_char-first_char),(second_char-first_char_p+1));

        }

        if((second_char-first_char_p) <0)
        {
            ops+=min((first_char-second_char),(first_char_p-second_char+1));

        }


}
  cout<<ops<<'\n';


}return 0;
}
