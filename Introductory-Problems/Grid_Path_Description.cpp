#include <bits/stdc++.h>
using namespace std;

using intt = long long;

const intt N = 7;

intt totalPaths = 0;

vector<vector<intt>> vis(N, vector<intt>(N, 0));

string path;

bool isValid(intt i, intt j) {

    return i >= 0 && i < N && j >= 0 && j < N;
}

void dfs(intt x, intt y, intt step) {

    if(step == N * N - 1 || (x == N - 1 && y == 0)) {

        totalPaths += (step == N * N - 1 && x == N - 1 && y == 0);

        return;
    }

    if((!isValid(x - 1, y) || vis[x - 1][y]) &&
       (!isValid(x + 1, y) || vis[x + 1][y])) {

        if(isValid(x, y - 1) && !vis[x][y - 1] &&
           isValid(x, y + 1) && !vis[x][y + 1]) {

            return;
        }
    }

    if((!isValid(x, y - 1) || vis[x][y - 1]) &&
       (!isValid(x, y + 1) || vis[x][y + 1])) {

        if(isValid(x - 1, y) && !vis[x - 1][y] &&
           isValid(x + 1, y) && !vis[x + 1][y]) {

            return;
        }
    }

    vis[x][y] = 1;

    if(path[step] == '?' || path[step] == 'L') {

        if(isValid(x, y - 1) && !vis[x][y - 1]) {

            dfs(x, y - 1, step + 1);
        }
    }

    if(path[step] == '?' || path[step] == 'R') {

        if(isValid(x, y + 1) && !vis[x][y + 1]) {

            dfs(x, y + 1, step + 1);
        }
    }

    if(path[step] == '?' || path[step] == 'U') {

        if(isValid(x - 1, y) && !vis[x - 1][y]) {

            dfs(x - 1, y, step + 1);
        }
    }

    if(path[step] == '?' || path[step] == 'D') {

        if(isValid(x + 1, y) && !vis[x + 1][y]) {

            dfs(x + 1, y, step + 1);
        }
    }

    vis[x][y] = 0;
}

void solve() {

    cin >> path;

    dfs(0, 0, 0);

    cout << totalPaths << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}