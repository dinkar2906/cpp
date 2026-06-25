#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {
    intt n;
    cin>>n;

    multiset<intt> st;

    for (intt i = 0; i < n; i++)
    {
        intt temp;
        cin>>temp;
        
        auto it = st.upper_bound(temp);
        if(it == st.end()){
            st.insert(temp);
        }else{
            st.erase(it);
            st.insert(temp);
        }


    }

    
    cout<<st.size()<<endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}