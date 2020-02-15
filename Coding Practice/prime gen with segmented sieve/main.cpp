#include <iostream>
#define ll long long int
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;
void Normal_Sieve(ll limit ,vector<int>&prime)
{
  bool marked[limit+1];

  memset(marked,true,limit);
  marked[0]=false;
  marked[1]=false;
  for(ll i=2;i*i<limit;i++)
    {
     if(marked[i])
      {     for(ll j=i*2;j<limit;j+=i)
                marked[j]=false;
       }

      }

  for(ll i=0;i<limit;i++)
  {
      if(marked[i])
        {prime.push_back(i);
        printf("%lld \n",i);
        }
  }

}




void Segmented_Sieve(int n)
{
  vector<int>prime;
  ll limit=floor(sqrt(n))+1;
  Normal_Sieve(limit,prime);

  ll low=limit;
  ll high =limit*2;
  while(low<n)
  {

      bool segment[limit+1];
  memset(segment,true,sizeof(segment));

  for(ll i=0;i<prime.size();i++)
  {
      ll lowlim= floor(low/prime[i])*prime[i];
      if(lowlim<low)
        lowlim+=prime[i];

      for(ll j=lowlim;j<high;j+=prime[i])
         segment[j-low]=false;


  }
 for(ll i=low;i<high;i++)
 {
     if(segment[i-low])
        printf("%lld\n",i);
 }
 low+=limit;
 high+=limit;
 if(high>=n)
    high=n;
  }
}




int main()
{  ios::sync_with_stdio(false);
   cin.tie(NULL);
    ll n;
    scanf("%lld",&n);
    Segmented_Sieve(n);
    return 0;
}
