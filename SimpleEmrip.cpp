#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e7;
vector<bool> isPrime(N + 5, true);
void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 4; i <= N; i += 2)
    {
        isPrime[i] = false;
    }

    for (int i = 3; i * i <= N; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= N; j += i * 2)
            {
                isPrime[j] = false;
            }
        }
    }
}

int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return rev;
}

int main()
{
    sieve();
    int n;
    while (cin >> n)
    {
        if (!isPrime[n])
            cout << n << " is not prime." << endl;
        else
        {
            if (isPrime[reverse(n)] && n != reverse(n))
                cout << n << " is emirp." << endl;
            else
                cout << n << " is prime." << endl;
        }
    }
    return 0;
}
