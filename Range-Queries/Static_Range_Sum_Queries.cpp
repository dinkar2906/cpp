#include <bits/stdc++.h>
using namespace std;

using intt = long long;

intt func(intt l, intt r, vector<intt>& sum) {
    return sum[r] - sum[l - 1];
}

void solve() {

    intt n, q;
    cin >> n >> q;

    vector<intt> sum(n + 1, 0);

    for (intt i = 1; i <= n; i++) {
        intt x;
        cin >> x;

        sum[i] = sum[i - 1] + x;
    }

    while (q--) {

        intt l, r;
        cin >> l >> r;

        cout << func(l, r, sum) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}