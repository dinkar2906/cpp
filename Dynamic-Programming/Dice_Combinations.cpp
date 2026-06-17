

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll helper(ll n, vector<ll>& dp) {

    if(n == 0) return 1;
    if(n < 0) return 0;

    if(dp[n] != -1) return dp[n];

    ll ans = 0;

    for(int i = 1; i <= 6; i++) {
        ans = (ans + helper(n - i, dp)) % MOD;
    }

    return dp[n] = ans;
}

int main() {

    ll n;
    cin >> n;

    vector<ll> dp(n + 1, -1);

    cout << helper(n, dp) << '\n';

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// long long solve(int n, vector<long long>& dp) {

//     if(n == 0) return 1;
//     if(n < 0) return 0;

//     if(dp[n] != -1)
//         return dp[n];

//     return dp[n] =
//         solve(n-1, dp) +
//         solve(n-2, dp) +
//         solve(n-3, dp) +
//         solve(n-4, dp) +
//         solve(n-5, dp) +
//         solve(n-6, dp);
// }


// int main() {

//     int n;
//     cin >> n;

//     vector<long long> dp(n + 1, -1);

//     cout << solve(n, dp);
// }
