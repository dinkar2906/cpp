#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int helper(const vector<ll>& c, ll x, ll cnt, ll& ans,vector<ll> &dp) {

    if(x == 0) {
        ans = min(ans, cnt);
        return ;
    }

    if(x < 0)
        return;

    for(auto coin : c) {
        helper(c, x - coin, cnt + 1, ans);
    }
}

int main() {

    ll n, x;
    cin >> n >> x;

    vector<ll> c(n);

    vector<ll> dp(x+1,-1);

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    ll ans = LLONG_MAX;

    helper(c, x, 0, ans,dp);

    if(ans == LLONG_MAX)
        cout << -1;
    else
        cout << ans<<endl;
}