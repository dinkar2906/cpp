#include <bits/stdc++.h>
using namespace std;

using intt = long long;
const intt MOD = 1e9+7;
void solve() {
    intt n;
    cin>>n;
    vector<intt> dp(n+1,-1);
    dp[1] =0;
    dp[2] = 1;
    for (intt i = 3; i <= n; i++)
    {
        dp[i]=((i-1) * (dp[i-1] + dp[i-2])%MOD)%MOD;
    }

    cout<<dp[n]<<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}