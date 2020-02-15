#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

int main()
{
   ios::sync_with_stdio(0);
   ll t;
   cin>>t;
   while(t--)
   {
       ll a,b,c,x,y;
       ll a1,b1,c1,x1,y1;

       cin>>a1>>b1>>c1>>x1>>y1;
       if((a1+b1+c1)==(x1+y1))
       {
           c=1000000001;
           if(a1<=c)
            c=a1;
           if(b1<=c)
            c=b1;
           if(c1<=c)
            c=c1;

            y=1000000001;
           if(x1<=y)
            y=x1;
           if(y1<=y)
            y=y1;

            if(c>=y)
                cout<<"NO\n";
            else if(c<y)
                cout<<"YES\n";
       }
        else cout<<"NO\n";
   }

    return 0;
}
