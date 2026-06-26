#include <bits/stdc++.h>
using namespace std;

using intt = long long;

// watch last part of tleeliminators from 16 minute


void solve() {
    intt n;
    cin>>n;
    vector<intt> vec(n);

    for (intt i = 0; i < n; i++)
    {
       cin>>vec[i];
    }

    intt temp1 = accumulate(vec.begin(),vec.end(),0LL);
    intt temp2 = *max_element(vec.begin(),vec.end());

    cout<<max(temp1,2*temp2)<<endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}