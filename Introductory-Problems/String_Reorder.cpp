#include <bits/stdc++.h>
using namespace std;

using intt = long long;

bool isPossible(vector<intt>& freq, int cur) {

    intt mx = 0;
    intt rem = 0;

    for(int i = 0; i < 26; i++) {
        mx = max(mx, freq[i]);
        rem += freq[i];
    }

    return mx <= (rem + 1) / 2 && freq[cur] <= rem / 2;
}

void solve() {

    string s;
    cin >> s;

    intt n = s.size();

    vector<intt> freq(26, 0);

    for(char c : s) {
        freq[c - 'A']++;
    }

    string ans;

    int last = -1;

    for(intt pos = 0; pos < n; pos++) {

        for(int ch = 0; ch < 26; ch++) {

            if(freq[ch] == 0) continue;
            if(ch == last) continue;

            freq[ch]--;

            if(isPossible(freq, ch)) {

                ans.push_back(char('A' + ch));
                last = ch;
                break;
            }

            freq[ch]++;
        }
    }

    if((intt)ans.size() == n) {
        cout << ans << '\n';
    }
    else {
        cout << -1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}