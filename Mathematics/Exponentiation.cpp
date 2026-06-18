#include <bits/stdc++.h>
using namespace std;

using intt = long long;

const intt MOD = 1e9+7;

void solve() {

    intt a ,b ;
    cin>>a>>b;

    if(b==0){
        cout<<1<<'\n';
        return ;
    }

    intt ans = 1; 

    while(b>0){
        if(b%2 == 1){
            ans=(ans * a) % MOD;
        }
        a=(a*a)%MOD;
        b=b/2;
    }

    cout << ans <<'\n';



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    intt n;
    cin>>n;

    while(n--){

        solve();
    }


    return 0;
}
