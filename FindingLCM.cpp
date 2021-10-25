#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ll t;
    cin >> t;
    ll x = t;
    while (t--)
    {
        ll a, b, L, i;
        cin >> a >> b >> L;
        cout << "Case " << x - t << ": ";
        ll Lab = (a / __gcd(a, b)) * b;

        if (L % Lab != 0)
            cout << "impossible\n";
        else
        {
            set<ll> divs;
            for (i = 1; i * i <= L; i++)
            {
                if (L % i == 0)
                {
                    divs.insert(i);
                    divs.insert(L / i);
                }
            }
            for (auto it : divs)
            {
                if (lcm(Lab, it) == L)
                {
                    cout << it << endl;
                    break;
                }
            }
        }
    }
    return 0;
}