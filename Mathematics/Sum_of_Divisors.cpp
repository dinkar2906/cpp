#include <bits/stdc++.h>
using namespace std;

using intt = long long;

const intt MOD = 1e9 + 7;
const intt INV2 = 500000004;

intt sumRange(intt l, intt r) {

    l %= MOD;
    r %= MOD;

    intt cnt = (r - l + 1) % MOD;
    intt sum = (l + r) % MOD;

    return (((sum * cnt) % MOD) * INV2) % MOD;
}

void solve() {

    intt n;
    cin >> n;

    intt ans = 0;

    intt l = 1;

    while(l <= n) {

        intt q = n / l;

        intt r = n / q;

        intt cur = sumRange(l, r);

        ans = (ans + (q % MOD) * cur) % MOD;

        l = r + 1;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}