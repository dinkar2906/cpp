#include <bits/stdc++.h>
using namespace std;

typedef long long intt;

int main() {
    intt n;
    cin >> n;

    vector<intt> p;

    for (intt i = 0; i < n; i++)
    {
        intt x;
        cin >> x;
        p.push_back(x);
    }

    sort(p.begin(), p.end());

    // for median just use p[n / 2]

    intt median = p[n / 2];

    intt ans = 0;

    for (intt i = 0; i < n; i++)
    {
        ans += abs(p[i] - median);
    }

    cout << ans << '\n';
}