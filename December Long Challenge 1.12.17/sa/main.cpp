#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 ll results[1000001];

 ll diamondsofrooms[2000002];
 ll biggest_n=1;

inline ll scan_f( ll *location)
{   register ll digit;
    register ll result = 0;
    while( (digit = getchar()) >= '0')
    result = (result << 3) + (result << 1) + digit - '0';
    *location = result;
    return 0;
}


int main()
{  /* clock_t t1,t2;
    t1=clock();
    //code goes here
   */
   ios::sync_with_stdio(false);
   register ll t;

   //scan_f(&t);
   memset(results,0,sizeof(results));
   memset(diamondsofrooms,0,sizeof(diamondsofrooms));
   register ll even,odd,digit;
   register ll n=2;
   register ll x;
  results[1]=2;
      while(n!=1000000)
   {   register ll i;

    //scan_f(&n);

       if(results[n]!=0)
        {cout<<results[n]<<'\n';continue;}

       register ll sum = 0;

     sum+=results[biggest_n];
    if(n>biggest_n)
       {for( i=biggest_n+1;i<=n;i++)
       {  even=0;odd=0;digit=0;
           x=i+1;
           ll y=x;
    if(diamondsofrooms[x]==0)
    {while(x)
    {
        digit=x%10;
      if (digit%2==1)
        odd+=digit;
      else
        even+=digit;
        x=x/10;
    }
      diamondsofrooms[y]=abs(even-odd);
      if(i<2*biggest_n)
      sum+= abs(even-odd)*(i-biggest_n)*2;
      else
        sum+=abs(even-odd)*(i);
    }
    else
        {
              if(i<2*biggest_n)
      sum+= diamondsofrooms[y]*(i-biggest_n)*2;
      else
        sum+=diamondsofrooms[y]*(i);
        }

}


if(n>=2*biggest_n)
      {for( i=2;i<=n;i++)
      {
    even=0;odd=0; digit=0;
    x=n+i;ll y=x;
    if(diamondsofrooms[x]==0)
    {
        while(x)
    {
      digit=x%10;
      if (digit%2==1)
        odd+=digit;
      else
        even+=digit;
       x=x/10;
    }
       sum+=abs(even-odd)*(n-i+1);
       diamondsofrooms[y]=abs(even-odd);
    }
     else
        sum+=diamondsofrooms[y]*(n-i+1);
     }
      }
      else
        {
        ll z=2;
         while(z<=2*biggest_n+1-n)
         {
             even=0;odd=0;digit=0;
           x=z+n;
           ll y=x;

    if(diamondsofrooms[x]==0)
    {while(x)
    {
        digit=x%10;
      if (digit%2==1)
        odd+=digit;
      else
        even+=digit;
        x=x/10;
    }
      diamondsofrooms[y]=abs(even-odd);
      sum+= abs(even-odd)*(n-biggest_n)*2;
    }
    else
        {
        sum+=diamondsofrooms[y]*(n-biggest_n)*2;
        }
        z++;
    }
    while(z<=n)
    {even=0;odd=0;digit=0;
           x=z+n;
           ll y=x;

    if(diamondsofrooms[x]==0)
    {while(x)
    {
        digit=x%10;
      if (digit%2==1)
        odd+=digit;
      else
        even+=digit;
        x=x/10;
    }
      diamondsofrooms[y]=abs(even-odd);
      sum+= abs(even-odd)*(n-z+1);
    }
    else
        {
        sum+=diamondsofrooms[y]*(n-z+1);
        }
        z++;
    }


      }
    cout<<sum<<'\n';

     results[n]=sum;
 if(n>biggest_n)
            biggest_n=n;
       }

       else if(n<biggest_n)
       {sum=0;

       for( i=1;i<=n;i++)
       {  even=0;odd=0;digit=0;
           x=i+1;
           ll y=x;

    if(diamondsofrooms[x]==0)
    {while(x)
    {
        digit=x%10;
      if (digit%2==1)
        odd+=digit;
      else
        even+=digit;
        x=x/10;
    }
      sum+= abs(even-odd)*i;
      diamondsofrooms[y]=abs(even-odd);
    }
    else
        sum+=diamondsofrooms[y]*i;
     }

      for( i=2;i<=n;i++)
      {
    even=0;odd=0; digit=0;
    x=n+i;ll y=x;
    if(diamondsofrooms[x]==0)
    {
        while(x)
    {
      digit=x%10;
      if (digit%2==1)
        odd+=digit;
      else
        even+=digit;
       x=x/10;
    }
       sum+=abs(even-odd)*(n-i+1);
       diamondsofrooms[y]=abs(even-odd);
    }
     else
        sum+=diamondsofrooms[y]*(n-i+1);
     }
     cout<<sum<<'\n';
     results[n]=sum;
   }
   n++;
       }



    /*cout<<"101sth "<<diamondsofrooms[101];
    t2=clock();
    float diff ((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;
    cout<<"Seconds Are "<<seconds<<endl;
    system ("pause");*/
    return 0;
}
