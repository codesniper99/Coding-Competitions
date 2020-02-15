#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

#define PI 3.14159265
#define mod 1000000007
using namespace std;

ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }

    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}
ll modInverse(ll a, ll m)
{

    ll m0 = m;
    ll y = 0, x = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        // q is quotient
        ll q = a / m;
        ll t = m;

        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;
        t = y;

        // Update y and x
        y = x - q * y;
        x = t;
    }

    // Make x positive
    if (x < 0)
       x += m0;

    return x;
}


ll p,r;

void convert_d_to_f(double n)
{
//cout<<"\nN = "<<n<<" ";
int flag=0;
if(n<0)
        {n=-n;flag=1;}
   double mantissa;
    double fractional_part;

    fractional_part = modf(n,&mantissa);
    double x = fractional_part;
    if(1.0-fractional_part<0.0000001)
    {

        fractional_part=0.0;
        mantissa=mantissa+1.0;
    }
//cout<<"\n Mantissa and Frac part ="<<mantissa<<" , "<<fractional_part<<'\n';

 //cout<<"\n X = "<<x<<"  ";
   double decimal_places=0.0;


    while(abs(floor(x)-x)>0.0001 && abs(ceil(x)-x)>0.0001 && decimal_places<=10)
    {
      x=x*10;
      decimal_places++;
    }
 //cout<<"\nX after wile = "<<x<<"   ";

    double numerator;
    numerator=x;

    double denominator;
 //cout<<"\nDecimal Places = "<<setprecision(10)<<decimal_places;
    decimal_places=ceil(decimal_places);
    denominator=pow(10,decimal_places);
    denominator=ceil(denominator);
 //cout<<" \nDenominator fresh = "<<denominator;


    ll c,d;
    ll divisor=gcdExtended(numerator,denominator,&c,&d);

  //cout<<"\n Initial Numerator , Deno = "<<numerator<<" , "<<denominator<<"  ";

  //cout<<"\nDivisor = "<<divisor;
    numerator=numerator/divisor;
    denominator=denominator/divisor;

  //cout<<"\nNumerator , Deno = "<<numerator<<" , "<<denominator<<"  ";
  //cout<<"m "<<mantissa<<" m";


    numerator= denominator*mantissa+numerator;

    if(flag==1)
        numerator=-numerator;
  //cout<<"\n Final Num. Denom. = "<<numerator<<" "<<denominator<<"  ";

   //cout<<"\nNumerator = "<<numerator<<"/"<<denominator<<'\n';

    p = numerator;

    r = modInverse(denominator,1000000007);

   //cout<<"R = "<<r<<'\n';

}

int main()
{
    ios::sync_with_stdio(0);
    ll T;
    cin>>T;
    while(T--)
    {
        ll l,d,t;
        cin>>l>>d>>t;
        double x= acos(double(d)/double(l));
        double y,angle;
        double full = 2*PI;

     //   cout<<"\n Initial omega -> X = "<<x;

        double total_angle=t*x;


       // cout<<"\nX = "<<x;

        //cout<<"\nTotal Angle = "<<total_angle<<"  ";



        p=1;r=1;

        angle = fmod(total_angle,full);
//        cout<<"\nAngle ="<<angle;

        y = l*cos(fmod(angle,(2*PI)));

  //      cout<<"\nY = "<<y<<" ";
        y = round( y * 10000000000.0 ) / 10000000000.0;
        convert_d_to_f(y);
        double answer = ((p%mod) * (r%mod))%mod;

        if(answer<0)
            answer=mod+answer;
    //    cout<<"\nY = "<<y<<" ";
      //  cout<<"\nP = "<<setprecision(20)<<p;
        //cout<<"\nR = "<<r;
        //cout<<"\nAnswer = ";
         cout<<setprecision(10)<<answer<<'\n';



    }


    return 0;
}
