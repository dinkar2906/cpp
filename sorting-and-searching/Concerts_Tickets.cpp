#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin>>n>>m;

    multiset<int> h;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        h.insert(x);

    }

    for (ll i = 0; i < m; i++)
    {
        ll x ;
        cin>>x;
        auto it = h.upper_bound(x);
        // >= nahi > ayega 
        if(it == h.begin()){
            cout<<-1<<'\n';
        }
        else{
            --it;
            // it does not exceed the maximum price 
            cout<<*it<<'\n';
            h.erase(it);
        }
    }
    

    return 0;
}