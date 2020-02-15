// DOOOOOOOOONE !!!!!!!!!!!

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];  ll b[n];
        register ll i;
          for( i=0;i<n;i++)
            {cin>>a[i];
              b[i]=-a[i];
            }

            ll x,hamming=0,counter=0;

for( i=0;i<n;i++)
{
    if(b[i]+a[i]==0)
    {
        for(ll j=0;j<n;j++)
        {
            ll x=b[j];
            if((b[j]+a[i])!=0 && (a[j]+b[i])!=0)
            {
                ll temp=b[j];
                b[j]=b[i];
                b[i]=temp;
                break;
            }


        }


    }



}

for(i =0;i<n;i++)
{
    if(b[i]<0)
        b[i]=-b[i];
}
for( i=0;i<n;i++)
        {
            if(a[i]!=b[i])
             hamming++;

        }


        cout<<hamming<<'\n';


        for( i=0;i<n;i++)
         cout<<b[i]<<' ';
          cout<<'\n';
    }

    return 0;
}
