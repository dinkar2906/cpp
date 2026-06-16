#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void helper(const vector<ll>& apple_weight,
            ll i,
            ll temp,
            ll& ans,
            ll total)
{
    if(i == apple_weight.size()){
        ans = min(ans, abs(total - 2 * temp));
        return;
    }

    // take
    helper(apple_weight, i + 1,
           temp + apple_weight[i],
           ans,
           total);

    // not take
    helper(apple_weight, i + 1,
           temp,
           ans,
           total);
}

int main(){
    ll n;
    cin >> n;

    vector<ll> apple_weight(n);

    ll total = 0;

    for(ll i = 0; i < n; i++){
        cin >> apple_weight[i];
        total += apple_weight[i];
    }

    // remember this abs(temp - (total - temp)) 

    ll ans = LLONG_MAX;

    helper(apple_weight, 0, 0, ans, total);

    cout << ans << '\n';
}