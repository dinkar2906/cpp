#include <bits/stdc++.h>

using namespace std;

using intt = long long;

const intt MOD = 1e9 + 7;
const int MAXN = 1000000 + 5;

vector<intt> fact(MAXN);
vector<intt> invFact(MAXN);

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

void precompute()
{
    fact[0] = 1;

    for (int i = 1; i < MAXN; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
    }

    invFact[MAXN - 1] = power(fact[MAXN - 1], MOD - 2);

    for (int i = MAXN - 2; i >= 0; i--)
    {
        invFact[i] = invFact[i + 1] * (i + 1) % MOD;
    }
}

intt ncr(intt n, intt r)
{
    if (r < 0 || r > n)
    {
        return 0;
    }

    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

void solve()
{
    intt n, r;
    cin >> n >> r;

    cout << ncr(n, r) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}