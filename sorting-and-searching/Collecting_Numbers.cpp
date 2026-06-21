#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {
    intt n;
    cin>>n;

    vector<intt> v(n,0);
    for (intt i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    intt cnt = 0;
    intt temp = 1;
    for (intt i = 0; i < n; i++)
    {
        if(v[i]==temp || v[i]==temp+1){
            temp++;
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