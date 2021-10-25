#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = 50000;
vector<ll> nod(N, 0);
void numberOfDivisors()
{
    for (ll i = 1; i <= N; i++)
    {
        for (ll j = i; j <= N; j += i)
        {
            nod[j]++;
        }
    }
}

int main()
{
    numberOfDivisors();
    ll n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            return 0;
        vector<ll> divs;
        set<ll> Tdivs;
        for (int i = 1; i * i < n; i++)
        {
            if (n % i == 0)
            {
                divs.push_back(n / i);
                Tdivs.insert(i);
                Tdivs.insert(n / i);
            }
        }

        divs.erase(divs.begin());
        ll nodn = Tdivs.size();
        ll card = nodn;
        nodn--;
        for (auto it : divs)
        {
            card += nodn - nod[it];
            cout << nodn - nod[it] << " ";
            nodn--;
        }
        cout << card << endl;
    }
    return 0;
}