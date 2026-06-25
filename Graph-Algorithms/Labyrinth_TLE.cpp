#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);

    pair<int, int> A, B;

    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];

        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'A')
            {
                A = {i, j};
            }

            if (grid[i][j] == 'B')
            {
                B = {i, j};
            }
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));

    vector<int> delrow = {-1, 0, 1, 0};
    vector<int> delcol = {0, 1, 0, -1};

    vector<char> dir = {'U', 'R', 'D', 'L'};

    queue<pair<pair<int, int>, string>> q;

    q.push({A, ""});
    vis[A.first][A.second] = true;

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();

        int row = it.first.first;
        int col = it.first.second;

        string path = it.second;

        if (row == B.first && col == B.second)
        {
            cout << "YES" << nl;
            cout << path.size() << nl;
            cout << path << nl;
            return;
        }

        for (int k = 0; k < 4; k++)
        {
            int nrow = row + delrow[k];
            int ncol = col + delcol[k];

            if (nrow < 0 || nrow >= n || ncol < 0 || ncol >= m)
            {
                continue;
            }

            if (grid[nrow][ncol] == '#')
            {
                continue;
            }

            if (vis[nrow][ncol])
            {
                continue;
            }

            vis[nrow][ncol] = true;

            q.push({
                {nrow, ncol},
                path + dir[k]
            });
        }
    }

    cout << "NO" << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}