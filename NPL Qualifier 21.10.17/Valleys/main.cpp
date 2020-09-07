#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main()
{int t;
scanf("%d",&t);
while(t--)
{long long int n;
scanf("%lld",&n);
 vector<long long int>a(n);
 for(long long int i=0;i<n;i++)
    scanf("%lld",&a[i]);
 long long int x,y,z;
 long long int counter=0;
 for(long long int i=1;i<n-1;i++)
 {
     x=a[i-1];
     y=a[i];
     z=a[i+1];
     if(x>y&&y<z)
        counter++;
 }
 printf("%lld \n",counter);

}


 return 0;
}
