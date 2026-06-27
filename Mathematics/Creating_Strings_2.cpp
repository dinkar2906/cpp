#include <bits/stdc++.h>
using namespace std;

using intt = long long;
const intt MOD = 1e9+7;


intt power(intt n,intt k){
    // if(k==0) return 1;

    intt ans = 1;
    while(k>0){
        if(k&1){
            ans = ans * n % MOD;
        }

        n = n* n %MOD;
        k>>=1;
    }
    return ans;

}

intt fact(intt n){
    intt ans =1 ;
    for (intt i = 2; i <= n; i++)
    {
        ans = ans * i % MOD;
    }
    return ans;
    
}

void solve() {

    string s;
    cin>>s;
    intt n= s.size();
    map<char,intt> mpp;
    for (intt i = 0; i < n; i++)
    {
        mpp[s[i]]++;
    }
    intt temp1 = 1;
    for (auto it : mpp )
    {
        temp1 = temp1* fact(it.second) %MOD; 
    }
    

    intt temp2 = fact(n);

    intt ans = temp2 * power(temp1,MOD-2) % MOD;

    cout<<ans<<endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}