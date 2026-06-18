#include <bits/stdc++.h>
using namespace std;

typedef long long intt;

void solve() {
    
}


// get comfortable with comparator


bool comp(pair<intt,intt> a , pair<intt,intt> b){
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    intt n;
    cin>>n;

    vector<pair<intt,intt>> movies;

    for(intt i = 0; i < n ; i++){
        intt a,b;
        cin>>a>>b;
        movies.push_back({a,b});
    }


    sort(movies.begin(),movies.end(),comp);

    intt endtime = 0;
    intt cnt =0 ;
    
    for(auto movie : movies){
        intt start = movie.first;
        intt end = movie.second;

        if(start>=endtime){
                cnt++;
                endtime = end;
        }


    }

    cout<<cnt<<endl;

    return 0;
}
