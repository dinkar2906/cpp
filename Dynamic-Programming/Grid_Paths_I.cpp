#include <bits/stdc++.h>
using namespace std;

using intt = long long;

const intt MOD = 1e9+7;
bool inBound(intt n,intt i,intt j){
    if(i>=0 && i<n && j>=0 && j<n){
        return true;
    }
    
    return false;
    
}


intt func(vector<string> &s,intt i,intt j,vector<vector<intt>> &dp){
    
    if(!inBound(s.size(),i,j) || s[i][j]=='*' ){
        return 0;
    }

    if(i==s.size()-1 && j==s.size()-1){
        return 1;
    }
    
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j] = (func(s,i+1,j,dp)%MOD+func(s,i,j+1,dp)%MOD)%MOD;
    
}


void solve() {
    intt n;
    cin>>n;
    
    vector<vector<intt>> dp(n+1,vector<intt>(n+1,-1));
    vector<string> s(n);

    for (intt i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    
    intt cnt = func(s,0,0,dp);

    cout<<cnt<<endl;
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}