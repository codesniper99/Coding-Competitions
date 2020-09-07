#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>

#define ll long long int
#define li long int
#define mods 1000000007
using namespace std;

#define MAX 100000
vector<ll>aarra;
vector<ll>barra;

ll multiply(ll x, ll res[], ll res_size) {

  ll carry = 0;

  for (ll i = 0; i < res_size; i++) {
    ll prod = res[i] * x + carry;

  res[i] = prod % 10;

   carry = prod / 10;
  }

    while (carry) {
    res[res_size] = carry % 10;
    carry = carry / 10;
    res_size++;
  }
  return res_size;
}

void power(ll x, ll n,ll o) {
  ll res[MAX];
  ll res_size = 0;
  ll temp = x;

  while (temp != 0) {
    res[res_size++] = temp % 10;
    temp = temp / 10;
  }

  for (ll i = 2; i <= n; i++)
    res_size = multiply(x, res, res_size);

 // cout << x << "^" << n << " = ";
  for (ll i = res_size - 1; i >= 0; i--)
    {
        //cout << res[i];
        if( o== 1)
        {
           aarra.push_back(res[i]);

        }
        else if(o==2)
        {
            barra.push_back(res[i]);
        }
    }
}


vector<ll>arra3;
// function to find gcd of two integer numbers


// Here 'a' is integer and 'b' is string.
// The idea is to make the second number (represented
// as b) less than and equal to first number by
// calculating its mod with first integer number
// using basic mathematics
ll reduceB(ll a,string b)
{
    // Initialize result
    ll mod = 0;

    // calculating mod of b with a to make
    // b like 0 <= b < a
    ll len=b.length();
    for (ll i=0; i<len; i++)
        mod = (mod*10 + b[i] - '0')%a;

    return mod; // return modulo
}

// This function returns GCD of 'a' and 'b'
// where b can be very large and is represented
// as a character array or string
ll gcdLarge(ll a, string b)
{
    // Reduce 'b' (second number) after modulo with a
    ll num = reduceB(a, b);

    // gcd of two numbers
    //cout<<a<< " "<<num<<'\n'<<__gcd(a,num);
    return __gcd(a, num);
}
void add()
{
    ll carry=0;
    ll len1=aarra.size();
    ll len2=barra.size();
    //cout<<'\n'<<len1<<" "<<len2<<'\n';
    if(len1>=len2)
    {
        for(ll i=0;i<len2;i++)
        {
            ll sum=0;
            //cout<<aarra[len1-i-1]<<" "<<barra[len2-i-1]<<" "<<carry;
            sum+=aarra[len1-i-1]+barra[len2-i-1]+carry;
            //cout<<sum<<'\n';
            carry=sum/10;
           // cout<<sum%10;
            arra3.push_back(sum%10);


        }
        for(ll j=len2;j<len1;j++)
        {
            ll sum=0;
           // cout<<aarra[len1-j-1];
            sum=aarra[len1-j-1]+carry;
            arra3.push_back(sum%10);
            carry=sum/10;

        }
        if(carry)
        {
            arra3.push_back(carry);
        }


    }

   else if(len1<len2)
    {
        ll carry=0;
        for(ll i=0;i<len1;i++)
        {
            ll sum=0;
            sum+=aarra[len1-i-1]+barra[len2-i-1]+carry;
            carry=sum/10;
            arra3.push_back(sum%10);


        }
        for(ll j=len1;j<len2;j++)
        {
            ll sum=0;
            sum=barra[len2-j-1]+carry;
            arra3.push_back(sum%10);
            carry=sum/10;

        }
        if(carry)
        {
            arra3.push_back(carry);
        }


    }

}

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n;
       // cin>>a>>b>>n;
        for( a=1;a<=10;a++)
         {
             for(b=1;b<=a;b++)
          {
              ll gcdforthis_pair=-1;
               for(n=1;n<=10;n++)

       {

           cout<<a<<" "<<b<<" "<<n<<'\n';


        aarra.clear();
        barra.clear();
        power(a,n,1);
        //cout<<'\n';
        power(b,n,2);
        //cout<<'\n';
        ll len1=aarra.size();
        ll len2 = barra.size();
     for(ll i=0;i<len1;i++)
          cout<<aarra[i];
      cout<<'\n';
        for(ll i=0;i<len2;i++)
           cout<<barra[i];
        cout<<'\n';
        arra3.clear();
        add();
        string s;
        ll len=arra3.size();
        for(ll i=0;i<len;i++)
        {
           s+=arra3[len-i-1]+'0';

        }

           cout<<"String - "<<s<<" "<<" "<<a-b<<'\n';
            ll answe;
            if(a!=b)
                {cout<<gcdLarge(a-b,s)%mods<<'\n';
                answe=gcdLarge(a-b,s)%mods;}

            else
            {
                ll mod = 0;
                // calculating mod of b with a to make
                // b like 0 <= b < a
                ll len=s.length();
                for (ll i=0; i<len; i++)
                mod = (mod*10 + s[i] - '0')%mods;

                cout<<mod<<'\n';
                answe=mod;
            }
            if(gcdforthis_pair==-1)
            {
                gcdforthis_pair=answe;

            }
            else{
                if(answe!=gcdforthis_pair)
                {
                    char c;
                    cout<<"\nWROOONG !!!\n";
                    cout<<gcdforthis_pair<<"  answer "<<answe<<'\n';
                    cin>>c;

                }
            }

            cout<<"----------------\n";

        //cout<<__gcd(int(pow(a,n)+pow(b,n)) ,ll((a-b) ))<<'\n';
            }
           }
          }
    }

    return 0;
}
