#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {
    
    intt n;
    cin>>n;

    vector<vector<intt>> adj(n+1);

    for (intt i = 1; i < n+1; i++)
    {
        intt a,b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);            

    }
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}