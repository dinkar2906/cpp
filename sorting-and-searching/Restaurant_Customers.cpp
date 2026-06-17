#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<pair<ll,ll>> vec;

//    sweep line solution very important 
    for(ll i =0;i<n;i++){
        ll a ,b;
        cin>>a>>b;
        vec.push_back({a,+1});
        vec.push_back({b,-1});
        
    }

    sort(vec.begin(),vec.end());

    ll cnt = 0;
    ll ans = 0;
// dont iterate till n iterate all the way use vec.size() 
    for( ll i=0;i<vec.size();i++){
        cnt+=vec[i].second;
        ans = max(ans,cnt);
    }

    cout<<ans<<'\n';


   return 0;
}