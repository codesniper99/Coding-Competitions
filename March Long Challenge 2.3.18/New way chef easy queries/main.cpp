#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

struct element
{
    ll no_of_zeros;
    ll no_of_ones;
};

int main()
{
     ios::sync_with_stdio(0);
     ll n,q;
     cin>>n>>q;
     vector<ll>a(n);
     ll total[n][32];

     for(ll i=0;i<n;i++)
        for(ll j=0;j<32;j++)
          total[i][j]=0;

     for(ll i=0;i<n;i++)
        {
            cin>>total[i][0];
            total[i][1]=-1;
        }



     while(q--)
     {
         ll l,r;
         cin>>l>>r;
        element bits[31];
// NCESSARY
        for(ll i=0;i<31;i++)
        {
            bits[i].no_of_zeros=0;
            bits[i].no_of_ones=0;
        }

        for(ll i=l-1;i<r;i++)
        {
            ll x = total[i][0];
        //cout <<'\n'<< x << ' ';

        //find the binary and store
        if(total[i][1]==-1)
        {


        // array to store binary number
           // counter for binary array
            ll len = 1;
          for(ll j=1;j<32;j++)
            total[i][j]=0;
            while (x > 0)
            {
        // storing remainder in binary array
            total[i][len] = x % 2;
            x = x / 2;
            len++;
            }

            for (ll j = 1; j <32 ;j++)
            {
                    if(total[i][j]==1)
                    {
                        bits[j-1].no_of_ones++;
                    }
                    else if(total[i][j]==0)
                    {
                        bits[j-1].no_of_zeros++;
                    }

            }

        }
        else
        {
            for (ll j = 1; j <32 ;j++)
            {
                    if(total[i][j]==1)
                    {
                        bits[j-1].no_of_ones++;
                    }
                    else if(total[i][j]==0)
                    {
                        bits[j-1].no_of_zeros++;
                    }

            }


        }
        }
        int answer[31];

        for(ll i=0;i<31;i++)
            answer[i]=0;

        for(ll i=0;i<31;i++)
        {
            if(bits[i].no_of_ones>=bits[i].no_of_zeros)
            {
                answer[i]=0;
            }
        else if(bits[i].no_of_ones<bits[i].no_of_zeros)
        {
            answer[i]=1;
        }

        }
        //cout<<"BITS\n";
        //for(ll i=0;i<31;i++)
        //{
       //     cout<<bits[i].no_of_zeros<<' '<<bits[i].no_of_ones;
        //    cout<<'\n';
        //}

        ll final_answer=0;
        for(ll i=0;i<31;i++)
        {
            final_answer+=pow(2,i)*answer[i];

        }
        cout<<"ANSWER\n";
         for(ll i=0;i<31;i++)
           cout<<answer[i]<<' ';
        cout<<'\n';

        cout<<final_answer<<'\n';
        }




     return 0;
}
