// Next Biggest Palindrome

#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int

using namespace std;

inline bool for_Nines(string k,ll n)
{
    for(ll i=0;i<n;i++)
    {
        if(k[i]!='9')
            return false;

    }
    return true;
}


inline void solve(string num, ll n)
{
     if(for_Nines(num,n))
    {
        cout<<"1";
        for(ll i=1;i<n;i++)
            cout<<"0";
        cout<<"1";
        cout<<'\n';
        return ;
    }

    ll mid = n/2;

    // A bool variable to check if copy of left side to right is sufficient or not
    bool leftsmaller = false;

    // end of left side is always 'mid -1'
    ll i = mid - 1;

    // Begining of right side depends if n is odd or even
    ll j = (n % 2)? mid + 1 : mid;

   // Initially, ignore the middle same digits
    while (i >= 0 && num[i] == num[j])
        i--,j++;

    // Find if the middle digit(s) need to be incremented or not (or copying left
    // side is not sufficient)
    if ( i < 0 || num[i] < num[j])
        leftsmaller = true;

    // Copy the mirror of left to tight
    while (i >= 0)
    {
        num[j] = num[i];
        j++;
        i--;
    }

    // Handle the case where middle digit(s) must be incremented.
    // This part of code is for CASE 1 and CASE 2.2
    if (leftsmaller == true)
    {
        ll carry = 1;
        i = mid - 1;

        // If there are odd digits, then increment
        // the middle digit and store the carry
        if (n%2 == 1)
        {
            num[mid] =num[mid]+ carry;
            carry = (num[mid]-48) / 10;
            num[mid] = ((num[mid]-48)%10)+48;
            j = mid + 1;
        }
        else
            j = mid;

        // Add 1 to the rightmost digit of the left side, propagate the carry
        // towards MSB digit and simultaneously copying mirror of the left side
        // to the right side.
        while (i >= 0)
        {
            num[i] =num[i]+carry;
            carry = (num[i]-48) / 10;
            (num[i]) = ((num[i]-48)%10)+48;
            num[j++] = num[i--]; // copy mirror to right
        }
    }
    // Printing
        for(ll z=0;z<n;z++)
        cout<<num[z]-48;
        cout<<'\n';
        return ;
}

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;

    while(t--)
    {
      string k;
      cin>>k;
      ll n=k.length();
      solve(k,n);

    }



    return 0;
}
