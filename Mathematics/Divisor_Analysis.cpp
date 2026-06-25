#include <bits/stdc++.h>
using namespace std;

using intt = long long;

const intt MOD = 1e9 + 7;
const intt MOD2 = MOD - 1;

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

intt numfunc(vector<pair<intt,intt>> &primes)
{
    intt ans = 1;

    for (intt i = 0; i < primes.size(); i++)
    {
        ans = ans * (primes[i].second + 1) % MOD;
    }

    return ans;
}

intt sumfunc(vector<pair<intt,intt>> &primes)
{
    intt ans = 1;

    for (intt i = 0; i < primes.size(); i++)
    {
        intt temp =
            (power(primes[i].first, primes[i].second + 1) - 1 + MOD) % MOD;

        intt inverse =
            power(primes[i].first - 1, MOD - 2);

        ans = ans * temp % MOD;
        ans = ans * inverse % MOD;
    }

    return ans;
}

intt mulfunc(vector<pair<intt,intt>> &primes)
{
    intt prodDiv = 1;
    intt numDiv = 1;

    for (intt i = 0; i < primes.size(); i++)
    {
        intt p = primes[i].first;
        intt a = primes[i].second;

        prodDiv = power(prodDiv, a + 1);

        intt exp =
            ((a * (a + 1) / 2) % MOD2 * numDiv) % MOD2;

        prodDiv = prodDiv * power(p, exp) % MOD;

        numDiv = numDiv * (a + 1) % MOD2;
    }

    return prodDiv;
}

void solve()
{
    intt n;
    cin >> n;

    vector<pair<intt,intt>> primes;

    while (n--)
    {
        intt x, k;
        cin >> x >> k;

        primes.push_back({x, k});
    }

    intt number = numfunc(primes);
    intt sumofnum = sumfunc(primes);
    intt multofnum = mulfunc(primes);

    cout << number << ' ' << sumofnum << ' ' << multofnum << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}