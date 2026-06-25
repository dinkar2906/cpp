#include <bits/stdc++.h>
using namespace std;

using intt = long long;

const intt MOD = 1e9 + 7;

intt power(intt a, intt b)
{
    intt res = 1;

    while (b)
    {
        if (b & 1)
        {
            res = res * a % MOD;
        }

        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

void solve()
{
    intt n, r;
    cin >> n >> r;

    if (r > n)
    {
        cout << 0 << '\n';
        return;
    }

    r = min(r, n - r);

    intt num = 1;

    for (intt i = 0; i < r; i++)
    {
        num = num * (n - i) % MOD;
    }

    intt den = 1;

    for (intt i = 1; i <= r; i++)
    {
        den = den * i % MOD;
    }

    cout << num * power(den, MOD - 2) % MOD << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}