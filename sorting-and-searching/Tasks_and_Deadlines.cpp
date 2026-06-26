#include <bits/stdc++.h>

using namespace std;

using intt = long long;

void solve()
{
    intt n;
    cin >> n;

    vector<pair<intt,intt>> a(n);

    for (intt i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    intt time = 0;
    intt ans = 0;

    for (intt i = 0; i < n; i++)
    {
        time += a[i].first;
        ans += a[i].second - time;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}