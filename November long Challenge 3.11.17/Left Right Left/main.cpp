// SOOOOOOOOOOOOOOOOOOOOOLVED

#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,r;
        scanf("%lld %lld",&n,&r);
        vector<long long int>a(n);

       for(ll i=0;i<n;i++)
          scanf("%lld",&a[i]);

       ll left,right;
       ll current; int flag=0;
       current = a[0];
       left = -1000000001;
       right = 1000000001;
       if(a[n-1]!=r)
       {
           printf("NO\n");
           continue;
       }
       for(ll i=1;i<n;i++)
       {
           if(a[i]<left||a[i]>right)
           {
               flag=1;
               printf("NO\n");
               break;
           }

           if(a[i]>left&&a[i]<right)
           {
               if(a[i]<current)
               {
                   right=current;
                   current=a[i];
               }
               else if(a[i]>current)
               {
                   left=current;
                   current=a[i];
               }
               else
                ;

           }


       }

        if(flag==0)
            printf("YES\n");

    }
    return 0;

}
