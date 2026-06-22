#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {

    intt k;
    cin >> k;

    intt digits = 1;
    intt count = 9;
    intt start = 1;

    while(k > digits * count) {

        k -= digits * count;

        digits++;
        count *= 10;
        start *= 10;
    }

    intt num = start + (k - 1) / digits;

    string s = to_string(num);

    cout << s[(k - 1) % digits] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    intt q;
    cin >> q;

    while(q--) {
        solve();
    }

    return 0;
}