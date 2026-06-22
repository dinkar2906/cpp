#include <bits/stdc++.h>
using namespace std;

using intt = long long;

intt func(intt n, vector<intt>& dp) {

    if(n == 0) {
        return 0;
    }

    if(dp[n] != -1) {
        return dp[n];
    }

    intt ans = LLONG_MAX;

    intt num = n;

    while(num > 0) {

        intt digit = num % 10;

        num /= 10;

        if(digit == 0) {
            continue;
        }

        ans = min(ans, 1 + func(n - digit, dp));
    }

    return dp[n] = ans;
}

void solve() {

    intt n;
    cin >> n;

    vector<intt> dp(n + 1, -1);

    cout << func(n, dp) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}