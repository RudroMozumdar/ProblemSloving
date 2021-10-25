#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPrime(int num)
{
    bool flag = true;
    if (num == 1)
        return true;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int n, c;
    while (cin >> n >> c)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if (n == 0 || c == 0)
            return 0;
        vector<int> primes;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (isPrime(i))
            {
                primes.push_back(i);
                count++;
            }
        }

        cout << n << " " << c << ":";
        signed int l1, l2;
        if (count % 2 == 0)
        {
            if (count <= (2 * c))
                l1 = 0;
            else
                l1 = (count - (2 * c)) / 2;
            l2 = l1 + (2 * c);
        }
        else
        {
            if (count <= (2 * c) - 1)
                l1 = 0;
            else
                l1 = (count - ((2 * c) - 1)) / 2;
            l2 = l1 + (2 * c) - 1;
        }

        for (int i = l1; i < l2 && i < count; i++)
            cout << " " << primes[i];
        cout << endl
             << endl;
        ;
    }
    return 0;
}