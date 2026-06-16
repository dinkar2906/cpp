#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n*(n+1)%4!=0){
        cout<<"NO";
        return 0;
    }
    vector<int> vec1,vec2;
    long long flag=0;
    while(n!=0){
        if(flag==0){
            if(n!=0){
                vec1.push_back(n);
                n--;
            }
            else{
                break;
            }if(n!=0){
                vec2.push_back(n);
                n--;
            }else{
                break;
            }
            flag=1;
        }else{
            if(n!=0){
                vec2.push_back(n);
                n--;
            }
            else{
                break;
            }if(n!=0){
                vec1.push_back(n);
                n--;
            }else{
                break;
            }
            flag=0;
        }
    }
    cout<<"YES"<<endl;
    cout<<vec1.size()<<endl;
    for(auto it: vec1){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<vec2.size()<<endl;
    for(auto it : vec2){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
