#include <bits/stdc++.h>
using namespace std;

using intt = long long;
const intt MOD = 1000000007;

intt power(intt a, intt b) {
    intt ans = 1;

    while (b > 0) {
        if (b & 1)
            ans = ans * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }

    return ans;
}

intt fact(intt n) {
    intt ans = 1;

    for (intt i = 2; i <= n; i++)
        ans = ans * i % MOD;

    return ans;
}

void solve() {
    intt n, m;
    cin >> n >> m;

    intt numerator = fact(n + m - 1);
    intt denominator = fact(n - 1);
    denominator = denominator * fact(m) % MOD;

    cout << numerator * power(denominator, MOD - 2) % MOD << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}