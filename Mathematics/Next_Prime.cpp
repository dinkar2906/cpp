#include <bits/stdc++.h>
using namespace std;

using intt = long long;

bool isPrime(intt n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (intt i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;

    return true;
}

void solve() {
    intt n;
    cin >> n;

    if (n < 2) {
        cout << 2 << '\n';
        return;
    }

    n++;

    if (n > 2 && n % 2 == 0)
        n++;

    while (true) {
        if (isPrime(n)) {
            cout << n << '\n';
            return;
        }
        n += 2;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}