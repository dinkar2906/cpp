#include <bits/stdc++.h>
using namespace std;
typedef long long int;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<pair<int,int>> vec;
    for(int i =0 ;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});

    }

    int ans=0;
    for(int i=0;i<n;i++){
        int cnt =0;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if((vec[j].first > vec[i].first ) || (vec[j].first < vec[i].second ) || (vec[j].first > vec[i].first ) || (vec[j].first < vec[i].second )){

            }
        }
        
    }

    return 0;
}