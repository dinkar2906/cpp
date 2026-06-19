#include <bits/stdc++.h>
using namespace std;

using intt = long long;

intt gcd(intt a ,intt b){
    if(b==0) return a;
    return gcd(b,a%b);
}



void solve() {
        intt n;
        cin>>n;
        vector<intt> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }

        intt ans = 0;
        for(intt i =0 ;i<n;i++){
            for(intt j = i+1 ;j<n;j++){
                ans = max(ans,gcd(vec[i],vec[j]));
            }
        }
        cout<<ans<<endl;
}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}
