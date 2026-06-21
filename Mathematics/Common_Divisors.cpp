#include <bits/stdc++.h>
using namespace std;

using intt = long long;

// [3,14,7,15,9]
// 3 ---> [1,3]
// 14 ----> [1,2,7,14]







void solve(intt n) {


    vector<intt> a(n,0);
    intt maxi = 0;
    for(intt i = 0;i<n;i++){
        cin>>a[i];
    }

    maxi = *max_element(a.begin(),a.end());
    vector<intt> freq(maxi+1,0);

    for(intt n : a){
        freq[n]++;
    }
    // there can be multiple same elements thats why freq 

    for(int i = maxi;i>=1;i--){
        int cnt =0;
        for(int j = i ; j<=maxi ; j+=i){
            cnt += freq[j];
            if(cnt>=2){
                cout<< i <<endl ;
                return;
            }
        }
    }



}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    intt n = 1;
    cin >> n;

    solve(n);

    return 0;
}
