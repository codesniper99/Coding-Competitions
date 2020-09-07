#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--)
  {

      long long int n,k;
      scanf("%lld",&n);
      vector<long long int>a(n);

      for(long long int i=0;i<n;i++)
        scanf("%lld",&a[i]);

      scanf("%lld",&k);

      int which=a[k-1];
      long long int x=0;
      sort(a.begin(),a.end());
        while(a[x]!=which)
        {
            x++;
        }

      printf("%lld\n",++x);
  }
    return 0;
}
