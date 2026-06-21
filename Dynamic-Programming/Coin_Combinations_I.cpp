#include <bits/stdc++.h>
using namespace std;

using intt = long long;
const intt MOD = 1e9 + 7;

intt func(intt n, intt x, vector<intt> &c, vector<intt> &dp) {

    if (x == 0)
        return 1;

    if (x < 0)
        return 0;

    if (dp[x] != -1)
        return dp[x];

    intt ans = 0;

    for (auto coin : c) {
        ans = (ans + func(n, x - coin, c, dp)) % MOD;
    }

    return dp[x] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    intt n, x;
    cin >> n >> x;

    vector<intt> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    vector<intt> dp(x + 1, -1);

    cout << func(n, x, c, dp) << '\n';

    return 0;
}