//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long y,x;
        cin>>x>>y;
        long long result;
        if(y>=x){
            if(y%2==1){
                result=y*y-(x-1);
            }else{
                result=(y-1)*(y-1)+1+(x-1);
            }
        }else{
            if(x%2==0){
                result=x*x-(y-1);
            }else{
                    result=(x-1)*(x-1)+1+(y-1);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}