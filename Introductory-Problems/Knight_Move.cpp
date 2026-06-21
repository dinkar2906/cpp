#include <bits/stdc++.h>
using namespace std;

using intt = long long;

bool isValid(intt i, intt j, intt n) {

    return i >= 0 && i < n && j >= 0 && j < n;
}

void solve() {

    intt n;
    cin >> n;

    vector<vector<intt>> grid(n, vector<intt>(n, -1));

    vector<pair<intt, intt>> del = {
        { 2, 1},
        { 2,-1},
        {-2, 1},
        {-2,-1},
        { 1, 2},
        {-1, 2},
        { 1,-2},
        {-1,-2}
    };

    queue<pair<intt, intt>> q;

    q.push({0, 0});

    grid[0][0] = 0;

    while(!q.empty()) {

        auto [i, j] = q.front();
        q.pop();

        for(auto [dx, dy] : del) {

            intt ni = i + dx;
            intt nj = j + dy;

            if(isValid(ni, nj, n) && grid[ni][nj] == -1) {

                grid[ni][nj] = grid[i][j] + 1;

                q.push({ni, nj});
            }
        }
    }

    for(intt i = 0; i < n; i++) {

        for(intt j = 0; j < n; j++) {

            cout << grid[i][j] << ' ';
        }

        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}