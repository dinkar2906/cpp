#include <bits/stdc++.h>
using namespace std;

using intt = long long;

bool isbound(const vector<string>& mapp, intt i, intt j) {
    return i >= 0 && i < mapp.size() &&
           j >= 0 && j < mapp[0].size();
}

void bfs(vector<string>& mapp,
         vector<vector<intt>>& vis,
         intt i, intt j) {

    queue<pair<intt,intt>> q;

    q.push({i,j});
    vis[i][j] = 1;

    while(!q.empty()) {

        auto [x,y] = q.front();
        q.pop();

        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};

        for(int k=0;k<4;k++) {

            intt nx = x + dx[k];
            intt ny = y + dy[k];

            if(isbound(mapp,nx,ny) &&
               mapp[nx][ny] == '.' &&
               !vis[nx][ny]) {

                vis[nx][ny] = 1;
                q.push({nx,ny});
            }
        }
    }
}

void solve() {

    intt n,m;
    cin >> n >> m;

    vector<string> mapp(n);

    for(intt i=0;i<n;i++) {
        cin >> mapp[i];
    }

    vector<vector<intt>> vis(n,vector<intt>(m,0));

    intt cnt = 0;

    for(intt i=0;i<n;i++) {
        for(intt j=0;j<m;j++) {

            if(mapp[i][j] == '.' && !vis[i][j]) {
                cnt++;
                bfs(mapp,vis,i,j);
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