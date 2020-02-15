#include<bits/stdc++.h>
using namespace std;
double i,n,den;
long gcd(long a, long b)
{
	if(a==0)
	return b;
	else if(b==0)
	return a;
	if(a<b)
	return gcd(a,b%a);
	else
	return gcd(b,a%b);
}
void foo(double var)
{
    i=floor(var);
	double frac =var-i;
	const long prec=1000000007;
	long gcd1=gcd(frac,prec);
	den=prec/gcd1;
	n=(frac*prec)/gcd1;
}
int modInverse(int a, int m)
{
    int m0 = m;
    int y = 0, x = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
       x += m0;
    return x;
}
int main()
{
int T;
cin>>T;
while(T--)
{
i=0,n=0,den=0;
float l,d,t;
cin>>l>>d>>t;
float f=acos(d/l);
float w=cos(t*f)*l;
cout<<w<<endl;
foo(w);
i=i*den+n;
long h=int(i);
int fec=(int)den;
int e=modInverse(fec,1000000007);
long r=((e%1000000007)*(h%1000000007))%1000000007;
if(r<0)
r=r+1000000007;

cout<<r<<endl;
}
return 0;
}
