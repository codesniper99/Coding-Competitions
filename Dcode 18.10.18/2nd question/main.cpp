#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

ll highestPowerof2(unsigned ll n)
{
    // Invalid input
    if (n < 1)
        return 0;

    ll res = 1;

    // Try all powers starting from 2^1
    for (ll i=0; i<8*sizeof(unsigned ll); i++)
    {
        ll curr = 1 << i;

        // If current power is more than n, break
        if (curr > n)
           break;

        res = curr;
    }

    return res;
}


int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        ll k;
        cin>>n>>k;
   //     for(ll j=3;j<10000;j++)
   //     for(ll z=1;z<=j;z++){
     //           cout<<"----------------------------------\n";
     //           n=j;k=z;
     //   cout<<"Brute Force answer = "<<answer(n,k)<<" \n";
     //   //cout<<highestPowerof2(n)<<'\n';
        ll answer_from_one= (n-highestPowerof2(n))*2;

        ll total_answer;
        if(answer_from_one==0)
            answer_from_one=n;


        {
            answer_from_one--;
            total_answer=(answer_from_one+k-1)%(n);


        }
      //  cout<<"Formula Answer :- ";
        cout<<total_answer+1<<' ' ;
        ll counter=0;

        if((n-1)%2==0)
            cout<<"Light\n";
        else
        cout<<"L\n";

      //  if(total_answer+1 != answer(n,k))
      //  {cout<<n<<" "<<k<<" ";cout<<"\nWTFFFFFFFFFFFFFFFFFFFFFFFFF stop";char c;cin>>c;}
   //     }
    }

    return 0;
}
