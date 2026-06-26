#include <bits/stdc++.h>
using namespace std;

using intt = long long;

bool helper(const vector<intt> &k,intt mid,intt t){
    intt num =0;
    for (intt i = 0; i < k.size(); i++)
    {
        num+=mid/k[i];
        if(num>=t){
            return true;
        }
    }
    return false;
    
}   

void solve() {
    intt n,t;
    cin>>n>>t;
    vector<intt> k(n);
    for (intt i = 0; i < n; i++)
    {
        cin>>k[i];
    }
    
    intt low =1;
    intt high =1e18;
    intt ans = high;

    while(low<=high){
        intt mid = low+(high-low)/2;

        if(helper(k,mid,t)){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    
    cout<<ans<<'\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}