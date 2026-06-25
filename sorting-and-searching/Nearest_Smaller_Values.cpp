#include <bits/stdc++.h>

using namespace std;

using intt = long long;

void solve()
{
    intt n;
    cin >> n;

    vector<intt> a(n + 1);

    for (intt i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    stack<intt> st;

    for (intt i = 1; i <= n; i++)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            cout << 0 << ' ';
        }
        else
        {
            cout << st.top() << ' ';
        }

        st.push(i);
    }

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}