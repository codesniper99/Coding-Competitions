#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
#include <string.h>

ll minimum=99999;
// The main function that recursively prints all interleavings.
// The variable iStr is used to store all interleavings (or
// output strings) one by one.
// i is used to pass next available place in iStr
void printIlsRecur (char *str1, char *str2, char *iStr, int m,
                    int n, int i)
{
    // Base case: If all characters of str1 and str2 have been
    // included in output string, then print the output string
    if (m==0 && n==0)
        {
            ll sum=0;
            char current=iStr[0];
            char next=iStr[1];
            ll length = strlen(iStr);
         for(ll i=0;i<length;i++)
         {
             next=iStr[i];
             if(next!=current)
             {
                 sum++;
                 current=next;
             }

         }
         if(sum<minimum)
            minimum=sum;

    //     cout<<'\n'<<iStr<<" "<< sum+1<<'\n';

        }

    // If some characters of str1 are left to be included, then
    // include the  first character from the remaining characters
    // and recur for rest
    if (m != 0)
    {
        iStr[i] = str1[0];
        printIlsRecur (str1 + 1, str2, iStr, m-1, n, i+1);
    }

    // If some characters of str2 are left to be included, then
    // include the  first character from the remaining characters
    // and recur for rest
    if (n != 0)
    {
        iStr[i] = str2[0];
        printIlsRecur(str1, str2+1, iStr, m, n-1, i+1);
    }
}

// Allocates memory for output string and uses printIlsRecur()
// for printing all interleavings
void printIls (char *str1, char *str2, ll m, ll n, char big_array[])
{

   // print all interleavings using printIlsRecur()
   printIlsRecur (str1, str2, iStr, m, n, 0);

   // free memory to avoid memory leak
   free(iStr);
}

// Driver program to test above functions
int main()
{ ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {

    char big_array[10002];
    minimum=99999;
    ll length_a,length_b;
      cin>>length_a>>length_b;

    char str1[5001];
    char str2[5001];
    cin>>str1>>str2;

    solve(str1, str2, length_a, length_b,big_array);
    cout<<minimum+1<<'\n';

    }
    return 0;
}
