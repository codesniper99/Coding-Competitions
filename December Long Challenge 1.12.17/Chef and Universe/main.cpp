#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {

      long int x,y,z;
      int a,b,c;
      scanf("%ld %ld %ld %d %d %d",&x,&y,&z,&a,&b,&c);
      long long int minimum=9999999;
      long int maxi=-999999;
      long int mid;
      long int mini=999999;
      if(x>maxi)
        maxi=x;
      if(x<mini)
        mini=x;
          if(y>maxi)
        maxi=y;
      if(y<mini)
        mini=y;
            if(z>maxi)
        maxi=z;
      if(z<mini)
        mini=z;
    long int sum=x+y+z;
    mid=sum-maxi-mini;
int flag=0;
      long long int cost1,cost2,cost3,cost4a,cost4b,cost5a,cost5b;
      long int i,j,k;
      i=mini;
      j=mid;
      k=maxi;
      cost1=c*i+b*(j-i)+a*(k-j);
      if(cost1<minimum)
        {minimum=cost1;flag=1;}
      cost2=(i+j+k)*a;
      if(cost2<minimum)
        {minimum=cost2;flag=2;}
      cost3=(b-a)*j+a*(i+k);
      if(cost3<minimum)
        {minimum=cost3;flag=3;}
      cost4a=b*j+a*i+a*(k-j);
      if(cost4a<minimum)
        {minimum=cost4a;flag=41;}
      cost4b=b*(i+j);
      cost5a=b*i+a*(j+k-i);
      if(cost5a<minimum)
        {minimum=cost5a;flag=51;}
      cost5b=b*i+b*(k-i);
      if(i+j==k)
      {if(cost4b<minimum)
          {minimum=cost4b;flag=42;}
        if(cost5b<minimum)
            {minimum=cost5b;flag=52;}
      }
      cout<<"Costs -- "<<cost1<<' '<<cost2<< ' '<<cost3<<' '<<cost4a<<' '<<cost4b<< ' '<<cost5a<<' '<<cost5b<<'\n';
     cout<<'\n'<<i<<' '<<j <<' '<<k<<' '<<flag<<'\n';
      printf("%lld\n",minimum);

    }

    return 0;
}
