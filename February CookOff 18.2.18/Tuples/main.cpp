// C++ Program to print prime factors and their
// powers using Sieve Of Eratosthenes
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

#define ll long long int
#define li long int


using namespace std;

// Using SieveOfEratosthenes to find smallest prime
// factor of all the numbers.
// For example, if N is 10,
// s[2] = s[4] = s[6] = s[10] = 2
// s[3] = s[9] = 3
// s[5] = 5
// s[7] = 7
ll s[1000001];

void sieveOfEratosthenes(ll N)
{
    // Create a boolean array "prime[0..n]" and
    // initialize all entries in it as false.
    vector <bool> prime(N+1, false);

    // Initializing smallest factor equal to 2
    // for all the even numbers
    for (ll i=2; i<=N; i+=2)
        s[i] = 2;

    // For odd numbers less then equal to n
    for (ll i=3; i<=N; i+=2)
    {
        if (prime[i] == false)
        {
            // s(i) for a prime is the number itself
            s[i] = i;

            // For all multiples of current prime number
            for (ll j=i; j*i<=N; j+=2)
            {
                if (prime[i*j] == false)
                {
                    prime[i*j] = true;

                    // i is the smallest prime factor for
                    // number "i*j".
                    s[i*j] = i;
                }
            }
        }
    }
}

// Function to generate prime factors and its power
void generatePrimeFactors(ll N)
{
    // s[i] is going to store smallest prime factor
    // of i.

    // Filling values in s[] using sieve
    sieveOfEratosthenes(N);

    printf("Factor Power\n");

    ll curr = s[N];  // Current prime factor of N
    ll cnt = 1;   // Power of current prime factor

    // Printing prime factors and their powers
    while (N > 1)
    {
        N /= s[N];

        // N is now N/s[N].  If new N als has smallest
        // prime factor as curr, increment power
        if (curr == s[N])
        {
            cnt++;
            continue;
        }

        printf("%lld\t%lld\n", curr, cnt);

        // Update current prime factor as s[N] and
        // initializing count as 1.
        curr = s[N];
        cnt = 1;
    }
}

//Driver Program

int main()
{
    ll N = 1000000;
    generatePrimeFactors(N);
    return 0;
}
