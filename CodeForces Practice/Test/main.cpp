#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    string a;
    cin>>a;
    string b;
    string c;
    for(ll i=a.length()-1;i>=0;i--)
        c+=a[i];
    b=c+a;
    cout<<b;


    return 0;
}
