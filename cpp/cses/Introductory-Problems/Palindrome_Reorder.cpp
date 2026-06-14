#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    string s;
    cin>>s;
 
    map<char,int> mpp;
 
    for( char c : s ){
        mpp[c]++;
    }
 
    int cnt = 0 ;
    pair<char,int> oddchar; 
    for(auto it : mpp){
        if(it.second%2==1){
            cnt++;
            oddchar.first = it.first;
            oddchar.second = it.second; 
            
        }
    }
    if(cnt>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    
    string ans;

    for(auto it : mpp){
        if(it.second%2==1){
            continue;
        }
 
        ans.append(it.second/2,it.first);
 
    }
    string temp = ans;
    reverse(temp.begin(),temp.end());
    if(cnt == 1){
 
        ans.append(oddchar.second,oddchar.first);
    }
    ans = ans + temp;
    cout<<ans;
 
}
