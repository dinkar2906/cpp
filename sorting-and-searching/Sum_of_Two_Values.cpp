#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;
    long long ans = LLONG_MIN;
    // kadane's algorithm
    for (int i = 0; i < n; i++) {

        sum += a[i];

        ans = max(ans, sum);

        if (sum < 0) {
            sum = 0;
        }
    }

    cout << ans << '\n';
}