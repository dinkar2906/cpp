#include <bits/stdc++.h>
using namespace std;

using intt = long long;

void solve() {
    intt n,x;
    cin>>n>>x;

    vector<pair<intt,intt>> a(n);

    for (intt i = 0; i < n; i++)
    {
        intt t;
        cin >>t;
        a[i]={t,i};
    }
    sort(a.begin(),a.end());
    for (intt i = 0; i < n; i++)
    {
        for (intt j = i+1; j < n; j++)
        {
            intt need = x- a[i].first - a[j].first;
            intt k = j+1;
            intt l = n-1;
            while(k<l){
                if(a[k].first+a[l].first==need){
                    cout<<a[i].second+1<<' '<<a[j].second+1<<' '<<a[k].second+1<<' '<<a[l].second+1<<endl;
                    return;
                }else if(a[k].first+a[l].first>need){
                    l--;
                }else{
                    k++;
                }
            }
        }
        
    }
    cout<<"IMPOSSIBLE"<<endl;
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}