#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {
    intt n,x;
    cin>>n>>x;

    vector<intt> a(n);

    for (intt i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    // sort(a.begin(),a.end()); no sorting 
    intt i =0;
    intt j = 0;
    intt sum=0;
    intt cnt =0;
    
    while(j<n){
        sum+=a[j];

        while(sum>x){
            sum-=a[i];
            i++;
        }

        if(sum==x){
            cnt++;
        }
        j++;
    }
    cout<<cnt<<'\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}