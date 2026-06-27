#include <bits/stdc++.h>
using namespace std;

using intt = long long;


intt func(intt l, intt r, vector<intt>& sum) {
    return sum[r] - sum[l - 1];
}

void solve() {
    intt n,q;
    cin>>n>>q;

    vector<intt> vec(n);
    vector<intt> presum(n);

    intt ans = 0 ;
    for (intt i = 0; i < n; i++)
    {
        cin>>vec[i];
        ans += vec[i];
        presum[i]= ans;
    }
    vector<intt> temp(n,0);
    while(q--){
        intt i;
        if(i==1){
            intt k,u;
            cin>>k,u;
            temp[k-1]+=u;
        }else{
            intt a,b;
            cin>>a>>b;
            intt ans = func(a,b,presum);

        }
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