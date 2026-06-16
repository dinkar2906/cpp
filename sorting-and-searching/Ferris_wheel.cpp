#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n,x;
    cin >> n >> x;

    vector<ll> p(n,0);

    for(int i = 0 ; i < n ; i++){
        cin>>p[i];
    }

    sort(p.begin(),p.end());

    ll i = 0;

    ll count = 0 ; 
    ll j = n-1;

    // Pair the lightest child with the heaviest child.

    while (i <= j) {
    if (p[i] + p[j] <= x) {
        i++;
        j--;
    } else {
        j--;
    }
    count++;
}
    
    cout << count << '\n';
    
    return 0;
}