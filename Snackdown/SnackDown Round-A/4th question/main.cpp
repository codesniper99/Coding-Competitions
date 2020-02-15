#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int
// CPP program to Decimal to binary conversion
// using bitwise operator
// Size of an integer is assumed to be 32 bits
#include <iostream>
using namespace std;

// Function that convert Decimal to binary
int decToBinary(int n)
{
    ll t=0;
	// Size of an integer is assumed to be 32 bits
	for (int i = 31; i >= 0; i--) {
		int k = n >> i;
		if (k & 1)
			{ t++;}
		else
			;
	}
	return t;
}

// driver code
int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll a,b,c;
      cin>>a>>b>>c;

      ll ones_in_a= decToBinary(a);

      ll ones_in_b= decToBinary(b);

      ll ones_in_c= decToBinary(c);

      cout<<ones_in_a<<" "<<ones_in_b<<" "<<ones_in_c<<'\n';
      ll answer=0;


    }

}
