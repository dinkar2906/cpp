#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {
    intt n,x;
    cin>>n>>x;
    vector<pair<intt,intt>> a(n);

    for (intt i = 0; i < n; i++)
    {
        int num;
        cin>>num;

        a[i]= {num,i+1};

    }
    
    // bool flag = false;

    sort(a.begin(),a.end());

    for (intt i = 0; i < n; i++)
    {
        intt find = x-a[i].first;
        intt j =i+1;
        intt k= n-1;

        while(j<k){
            if(a[j].first+a[k].first == find){
                cout<<a[i].second<<' '<<a[j].second<<' '<<a[k].second<<endl;
                return;
            }else if(a[j].first+a[k].first > find){
                k--;
            }else{
                j++;
            }
        }
    }

    cout<<"IMPOSSIBLE\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}