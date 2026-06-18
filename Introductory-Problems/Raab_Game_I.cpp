//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long intt;

void solve(){
    intt n,a,b;
    cin>>n>>a>>b;

    // a+b >n ---> no
    // a == 0 or b == 0 && a+b !=0 --->no
    // a+b == 0 ---> yes print from 1 to n and then again 1 to n
    // a+b is in [1,n] a!=0 and b!=0 ---->yes 
    // print from [a+1,....,a+b,1,2,....,a,a+b+1,.....,n]
    if(a+b>n) {
        cout<<"NO\n";
        return;
    }

    if((a==0 || b==0 ) && a+b != 0){
        cout<<"NO\n";
        return;

    }
    if(a==0 && b==0){

        for(intt i=1;i<=n;i++){
            cout<<i<<' ';
        }

        cout<<'\n';

        for(intt i=1;i<=n;i++){
            cout<<i<<' ';
        }
        cout<<'\n';
        return;
    }

    // intt tie = abs(a-b);
    // n= n - tie;

    for(intt i = 1; i<=n ;i++){
        cout<<i<<' ';
    }

    cout<<'\n';

    for(intt i = a+1;i<=a+b;i++){
        cout<<i<<' ';
    }

    for(intt i = 1;i<=a;i++){
        cout <<i<<' ';
    }
    for(intt i = a+b+1 ;i<=n;i++){
        cout<<i<<' ';
    }
    cout<<'\n';



}


int main(){
   intt t;
   cin>>t;
   while(t--){
    solve();
   }
}