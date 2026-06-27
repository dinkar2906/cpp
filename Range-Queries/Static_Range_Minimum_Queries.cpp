#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
const int LOG = 20;

int st[MAXN][LOG];
int lg[MAXN];

int main() {
    int n, q;
    cin >> n >> q;

    // Read array
    for (int i = 0; i < n; i++)
        cin >> st[i][0];

    // Precompute log values
    lg[1] = 0;
    for (int i = 2; i <= n; i++)
        lg[i] = lg[i / 2] + 1;

    // Build Sparse Table
    for (int j = 1; j < LOG; j++) {
        for (int i = 0; i + (1 << j) <= n; i++) {
            st[i][j] = min(
                st[i][j - 1],
                st[i + (1 << (j - 1))][j - 1]
            );
        }
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        int j = lg[r - l + 1];

        cout << min(
            st[l][j],
            st[r - (1 << j) + 1][j]
        ) << '\n';
    }
}