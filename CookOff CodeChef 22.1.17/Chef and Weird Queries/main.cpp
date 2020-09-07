#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("in.in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back
#define setBit(a,n) a|(1<<n)
#define setBitStatement(a,n) a|=1<<n;
#define resetBit(a,n) a&=~(1<<n);
#define checkBit(a,n) ((a&(1<<n))!=0)
#define toggleBit(a,n) a^=1<<n;
#define doubleingEqual(a,b) (fabs(a-b)<=EPS)
#define doubleingLess(a,b) ((b-a)>=EPS)
#define doubleingGreater(a,b) ((a-b)>=EPS)

#define INF 1000000000

 /*
long long int getSqRt(long long int num)
{
	long long int L=1;
	long long int R=num;
	long long int mid;

	while(L<R)
	{
		mid=(L+R)>>1;

		if((mid*mid)>num)
		{
			R=mid-1;
		}

		else if(mid*mid==num)
		{
			return mid-1;
		}

		else
		{
			L=mid+1;
		}
	}

	if(R*R==num)
	{
		return R-1;
	}

	if(L*L==num)
	{
		return L-1;
	}

	if(R*R<num)
	{
		return R;
	}

	if(L*L<num)
	{
		return L;
	}

}

 */
int main()
{
	// Bismillahir Rahmanir Rahim
	// Rabbi Zidni Ilma

	long long int T,Y;

	long long int counter,rrt,tmp;


	getLong(T)

	while(T--)
	{
		getLong(Y)

		if(Y==2)
		{
			printf("1\n");
			continue;
		}
 //b>=1 and a>0
		counter =0;

		rrt=sqrt((double)Y);
		rrt+=100;


		while(rrt>0)
		{
			tmp=Y-rrt*rrt;

			if(tmp<=0)
			{
				rrt--;
				continue;
			}

			if(tmp>=700)
			{
               counter += rrt*700;
               break;
			}

			else

			{
			    counter+=tmp;
			}

			rrt--;
		}

		printf("%lld\n",counter);

	}

    return 0;
}
