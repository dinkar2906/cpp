#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {

    intt n;
    cin >> n;

    vector<intt> pos(n + 1);

    for(intt i = 0; i < n; i++) {

        intt x;
        cin >> x;

        pos[x] = i;
    }

    intt rounds = 1;

    for(intt i = 1; i < n; i++) {

        if(pos[i] > pos[i + 1]) {
            rounds++;
        }
    }

    cout << rounds << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}