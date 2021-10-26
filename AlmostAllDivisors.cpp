#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> c;
        set<ll> s;
        for (ll i = 0; i < c; i++)
        {
            cin >> n;
            s.insert(n);
        }
        bool flag = true;
        ll mul = (*s.begin()) * (*s.rbegin());

        set<ll> s2;
        for (ll i = 2; i * i <= mul; i++)
        {
            if (mul % i == 0)
            {
                s2.insert(i);
                s2.insert(mul / i);
            }
        }

        if (s == s2)
            cout << mul << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}