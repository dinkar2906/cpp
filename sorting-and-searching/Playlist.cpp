#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {

    intt n;
    cin >> n;

    vector<intt> k(n);

    for(intt i = 0; i < n; i++) {
        cin >> k[i];
    }

    map<intt, intt> freq;
    // o(nlogn)
    // o(n)
    // unordered_map<intt, intt> freq;

    intt l = 0;
    intt ans = 0;

    for(intt r = 0; r < n; r++) {

        freq[k[r]]++;

        while(freq[k[r]] > 1) {

            freq[k[l]]--;

            l++;
        }

        ans = max(ans, r - l + 1);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}