#include <bits/stdc++.h>
using namespace std;

typedef long long intt;

void solve() {
    intt n, a, b;
    cin >> n >> a >> b;

    if (a + b > n) {
        cout << "NO\n";
        return;
    }

    if ((a == 0 || b == 0) && (a + b != 0)) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    for (intt i = 1; i <= n; i++) {
        cout << i << ' ';
    }
    cout << '\n';

    for (intt i = a + 1; i <= a + b; i++) {
        cout << i << ' ';
    }

    for (intt i = 1; i <= a; i++) {
        cout << i << ' ';
    }

    for (intt i = a + b + 1; i <= n; i++) {
        cout << i << ' ';
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    intt t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}