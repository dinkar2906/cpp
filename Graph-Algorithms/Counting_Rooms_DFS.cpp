#include <bits/stdc++.h>
using namespace std;

using intt = long long;

bool isbound(const vector<string>& mapp, intt i, intt j) {
    return i >= 0 && i < mapp.size() &&
           j >= 0 && j < mapp[0].size();
}

void dfs(vector<string>& mapp,
         vector<vector<intt>>& vis,
         intt i, intt j) {

    if (!isbound(mapp, i, j) ||
        mapp[i][j] == '#' ||
        vis[i][j])
        return;

    vis[i][j] = 1;

    dfs(mapp, vis, i + 1, j);
    dfs(mapp, vis, i - 1, j);
    dfs(mapp, vis, i, j + 1);
    dfs(mapp, vis, i, j - 1);
}

void solve() {

    intt n, m;
    cin >> n >> m;

    vector<string> mapp(n);

    for (intt i = 0; i < n; i++) {
        cin >> mapp[i];
    }

    vector<vector<intt>> vis(n, vector<intt>(m, 0));

    intt cnt = 0;

    for (intt i = 0; i < n; i++) {
        for (intt j = 0; j < m; j++) {

            if (mapp[i][j] == '.' && !vis[i][j]) {
                cnt++;
                dfs(mapp, vis, i, j);
            }
        }
    }

    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}