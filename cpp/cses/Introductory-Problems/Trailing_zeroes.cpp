#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    int num=5;
      while (num <= n) {
        cnt += n / num; 
        num *= 5; 
    }
cout<<cnt;
 
}