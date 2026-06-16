#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<ll> a(n);
    ll total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    ll ans = LLONG_MAX;

    for (int mask = 0; mask < (1 << n); mask++) {

        ll subset_sum = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset_sum += a[i];
            }
        }

        ans = min(ans, abs(total - 2 * subset_sum));
    }

    cout << ans << '\n';
}