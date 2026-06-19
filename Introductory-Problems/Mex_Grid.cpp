#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    for(int i =0;i<t;i++){
        for(int j =0 ;j<t;j++){
            cout << (i^j)<<' ';
        }
        cout<<'\n';
    }

    return 0;
}
