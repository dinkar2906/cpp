#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {
    intt x,n;
    cin>>x>>n;

    multiset<intt> st;
    set<intt> s;

    s.insert(0);
    s.insert(x);

    st.insert(x);

    for (intt i = 0; i < n; i++)
    {
        intt temp;
        cin>>temp;
        auto right = s.upper_bound(temp);
        auto left = right;
        --left; //why not left-- or left = left-1

        intt l = *left;
        intt r = *right;

        st.erase(st.find(r-l));
        st.insert(temp-l);
        st.insert(r-temp);

        cout<<*st.rbegin()<<' ';

        s.insert(temp);



    }
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}   