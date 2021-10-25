#include <bits/stdc++.h>
#include <stdio.h>
#include <queue>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    scanf("%lld", &n);
    stack<ll> st;
    ll a, b;
    while (n--)
    {
        scanf("%lld", &a);
        if (a == 1)
        {
            scanf("%lld", &b);
            st.push(b);
        }
        else if (a == 2)
        {
            if (!st.empty())
                st.pop();
        }
        else if (a == 3)
        {
            if (st.empty())
                printf("Empty!\n");
            else
                printf("%lld\n", st.top());
        }
    }
    return 0;
}
