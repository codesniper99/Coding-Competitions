#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {   long long int counter=0;
        long long int a,b;
        long long int y;
        scanf("%lld",&y);
        for(a=1;a<sqrt(y);a++)
       { b=1;
            while(b<=700)
        {
            if((a*a+b)<=y)
            {
                counter++;
            }
            b++;
        }
       }

        printf("%lld ",counter);
    }
    return 0;
}
