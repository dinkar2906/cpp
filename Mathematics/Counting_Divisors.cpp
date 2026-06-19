#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;

vector<int> divs(N + 1, 0);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            divs[j]++;
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        cout << divs[x] << '\n';
    }

    return 0;
}