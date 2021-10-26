#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll nod(ll num)
{
    set<ll> s;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            if (i % 2 == 0)
                s.insert(i);
            if ((num / i) % 2 == 0)
                s.insert(num / i);
        }
    }
    return s.size();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 != 0)
            cout << "0" << endl;
        else
            cout << nod(n) << endl;
    }
    return 0;
}