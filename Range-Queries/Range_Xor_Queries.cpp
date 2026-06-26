#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve()
{
    intt n, q;
    cin >> n >> q;
    vector<intt> vec(n);
    vector<intt> xorr(n, 0);

    intt temp = 0;
    for (intt i = 0; i < n; i++)
    {
        cin >> vec[i];
        temp = temp ^ vec[i];
        xorr[i] = temp;
    }

    while (q--)
    {
        intt a, b;
        cin >> a >> b;
        intt ans = 0;
        if (a == 1)
        {

            ans = xorr[b - 1];
        }

        else
        {

            ans = xorr[b - 1] ^ xorr[a - 2];
        }

        cout << ans << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--)
        solve();

    return 0;
}