#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {

    intt n;
    cin >> n;

    vector<intt> a(n);

    for(intt i = 0; i < n; i++) {
        cin >> a[i];
    }

    intt need = 1;
    intt rounds = 0;

    while(need <= n) {

        rounds++;

        for(intt i = 0; i < n; i++) {

            if(a[i] == need) {
                need++;
            }
        }
    }

    cout << rounds << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}