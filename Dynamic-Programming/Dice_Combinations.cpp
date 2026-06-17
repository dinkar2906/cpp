#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;

void helper(ll num,ll n , ll &ans){

    if( num == n){
        ans++;
        return ;
    }
    if(num>n) return;

    for(int i = 1 ; i <= 6 ; i++  ){
        helper(num+i,n,ans);
    }
} 

int main(){

    ll n;
    cin>>n;
    ll ans = 0 ;
    helper(0,n,ans);
    cout<<ans<<'\n';
    return 0;
}