#include <bits/stdc++.h>
using namespace std;

// return 
// evaluate while coming back

void solve(int n, vector<string>& vec) {
    if (n == 1) {
        vec = {"0", "1"};
        return;
    }

    solve(n - 1, vec);

    vector<string> temp = vec;

    // learn auto s : vec vs auto &s : vec

    for (auto &s : vec) {
        s = "0" + s;
    }

    for (int i = temp.size() - 1; i >= 0; i--) {
        vec.push_back("1" + temp[i]);
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> vec;
    solve(n, vec);

    for (auto &s : vec) {
        cout << s << '\n';
    }
}