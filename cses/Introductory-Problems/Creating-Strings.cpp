#include<bits/stdc++.h>
using namespace std;
 
int fact(int n){
    if(n==1){
        return 1;
    }
    return n * fact(n-1);
}
 
void func(set<string> &st,vector<int> flag,string temp,string &s){
        if(temp.size()==flag.size()){
            st.insert(temp);
        }
 
        for(int i = 0 ; i < flag.size(); i++){
            if(flag[i]==0){
                flag[i]=1;
                func(st,flag,temp + s[i],s);
                flag[i]=0;
            }
        }
}
 
int main(){
 
    string s;
    cin>>s;
    int n = s.size();
 
    map<char,int> mpp;
    for(char c : s){
        mpp[c]++;
    }
 
    int num = fact(n);
    for(auto it : mpp){
        if(it.second > 1){
            num = num/fact(it.second);
        }
    }
 
    cout<<num<<endl;
    set<string> st;
    vector<int> flag(n,0);
 
    func(st,flag,"",s);
 
    for(auto it : st){
        cout<<it<<endl;
    }
 
}
