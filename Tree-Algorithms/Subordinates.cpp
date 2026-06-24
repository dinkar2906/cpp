#include <bits/stdc++.h>
using namespace std;

using intt = long long;

vector<vector<intt>> adj;
vector<intt> sub;

void dfs(intt u) {

    sub[u] = 1;

    for (auto v : adj[u]) {
        dfs(v);
        sub[u] += sub[v];
    }
}

void solve() {

    intt n;
    cin >> n;

    adj.resize(n + 1);
    sub.resize(n + 1);

    for (intt i = 2; i <= n; i++) {

        intt boss;
        cin >> boss;

        adj[boss].push_back(i);
    }

    dfs(1);

    for (intt i = 1; i <= n; i++) {
        cout << sub[i] - 1 << ' ';
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}