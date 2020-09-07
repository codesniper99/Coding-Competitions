#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
      char s[51];
     scanf("%s",s);
      int r,l;
      r=1;l=1;
     int q=0;
     while(s[q]!='\0')
        q++;
        int flag=0;
        //q strlen hai
        char z=s[0];
        for(int i=0;i<q;i++)
        {
            if(s[i]!=z)
            {
                    flag++;
            z=s[i];
            }

        }
    printf("%d",flag-1);
  }
    return 0;
}
