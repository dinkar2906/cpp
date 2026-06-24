#include <bits/stdc++.h>
using namespace std;

typedef long long intt;

int main() {
    intt n;
    cin >> n;

    vector<intt> x;
    
    for (intt i = 0; i < n; i++)
    {
        intt a;
        cin >> a;
        x.push_back(a);
    }

    // if first not 1 then ans is 1 
    sort(x.begin(),x.end());

    if(x[0]!=1){
        cout<<1<<endl;
        return 0;
    }

    intt ans = 0;

    for (intt i = 0; i < n; i++)
    {
        if(x[i]>ans+1){
            break;
        }

        ans += x[i];
    }
    
    cout<<ans+1<<endl;



   
}