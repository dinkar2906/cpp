#include <bits/stdc++.h>
using namespace std;

using intt = long long;


intt pow(intt a,intt b,intt MOD){

    if(b==0){
        return 1;
    }

    intt ans = 1;

    while(b>0){
        if(b%2==1){
            ans = (ans*a) %MOD;
        }

        a = (a * a)%MOD;
        b=b/2; 
    }

    return ans;
}

void solve() {
        
    intt a,b,c;

    cin>>a>>b>>c;

    intt temp = pow(b,c,1e9+6);

    intt ans = pow(a,temp,1e9+7);

    cout<<ans<<'\n';

    



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) solve();

    return 0;
}
