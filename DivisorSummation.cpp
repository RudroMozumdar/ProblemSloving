#include <iostream>
#include <queue>
#include <set>
#include <cmath>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, i, sum = 0;
        cin >> a;
        set<ll> s;
        for (i = 1; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                s.insert(i);
                s.insert(a / i);
            }
        }

        for (auto it = s.begin(); it != s.end(); ++it)
            sum += (*it);
        cout << sum - a << endl;
    }
    return 0;
}