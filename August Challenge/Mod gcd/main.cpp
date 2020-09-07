#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
#define ll long long int
#define li long int

using namespace std;

int main()
{
     ios::sync_with_stdio(0);
     ll t;
     //cin>>t;
    // while(t--)

    ll a,b,n;
     for( a=2;a<15;a++)
          for(b=1;b<a;b++)
           for(n=1;n<15;n++)
     {cout<<"----------------\n";
        cout<<a<<" "<<b<<" "<<n<<'\n';
         cout<<pow(a,n)<<" "<<pow(b,n)<<" "<<pow(a,n)+pow(b,n)<<" "<<a-b<<'\n';
                cout<<__gcd(int(pow(a,n)+pow(b,n)) ,(int(a-b) ))<<'\n';
    cout<<"----------------\n";
     }

    return 0;
}
