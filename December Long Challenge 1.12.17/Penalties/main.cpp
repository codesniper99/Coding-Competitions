// DOOOOOOOOOOOONE :DDDDDD

#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
string s;
    while(cin>>s)
    {
        long long int counter=0;


    ll goals_a=0;
    ll goals_b=0;
    ll turns_a=5;
    ll turns_b=5;
    for(int turn=1;turn<=5;turn++)
    {

        if(s[(turn-1)*2]=='1')
            {goals_a++;}
         counter++;
          turns_a--;

         if((goals_a-goals_b)>turns_b)
          {printf("TEAM-A ");
           break;
          }
         if((goals_b-goals_a)>turns_a)
            {printf("TEAM-B ");
             break;
             }

             if(s[(turn-1)*2+1]=='1')
            {goals_b++;}
            counter++;
             turns_b--;
          if((goals_a-goals_b)>turns_b)
          {printf("TEAM-A ");
           break;
          }
         if((goals_b-goals_a)>turns_a)
            {printf("TEAM-B ");
             break;
             }

    }


int flag=0;
    if(goals_a==goals_b)
    {   counter=10;
        flag=0;int j=10;
        while(flag==0&&j<20)
        {

            if(s[j]!=s[j+1])
            {
                if(s[j]=='1')
                    flag=1;
                else
                    flag=-1;
            }
            j+=2;
            counter+=2;
        }

        if(flag==1)
            printf("TEAM-A ");
        else if(flag==-1)
            printf("TEAM-B ");
        else if(flag==0)
            printf("TIE\n");
    }
    if(counter==20&&flag!=0)
    printf("%lld\n",counter);
    else if(counter!=20)
      printf("%lld\n",counter);
    }
    return 0;
}
