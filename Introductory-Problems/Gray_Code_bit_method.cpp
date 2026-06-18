#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 1 << n;

    // iterate from 1 to 2^n and do (i ^ (i>>1))

    for (int i = 0; i < total; i++) {
        int gray = i ^ (i >> 1);
            // this is for printing bits you cant just print numbers 
        for (int j = n - 1; j >= 0; j--) {
            cout << ((gray >> j) & 1);
        }

        cout << '\n';
    }
}