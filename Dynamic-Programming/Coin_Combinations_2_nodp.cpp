#include <bits/stdc++.h>
using namespace std;

using intt = long long;

set<vector<intt>> st;

void func(int idx, intt x, vector<intt>& c, vector<intt>& temp) {

    if (x == 0) {
        st.insert(temp);
        return;
    }

    if (x < 0)
        return;

    for (int i = idx; i < c.size(); i++) {

        temp.push_back(c[i]);

        func(i, x - c[i], c, temp);

        temp.pop_back();
    }
}

int main() {

    intt n, x;
    cin >> n >> x;

    vector<intt> c(n);

    for (int i = 0; i < n; i++)
        cin >> c[i];

    sort(c.begin(), c.end());

    vector<intt> temp;

    func(0, x, c, temp);

    cout << st.size() << '\n';
}