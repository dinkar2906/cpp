#include<bits/stdc++.h>
using namespace std;

vector<string> vec(8);
int cnt = 0;


bool isvalid(const vector<string> &vec,int row,int col){

    for(int i = row -1 ;i >= 0 ; i-- ){
        if(vec[i][col] == 'Q') return false;
    }

    for(int i = row -1, j = col-1 ; i>=0 && j>=0 ; i--,j--){
        if(vec[i][j] == 'Q') return false;
    }   

    for(int i = row -1, j = col+1 ; i>=0 && j<8 ; i--,j++){
        if(vec[i][j] == 'Q') return false;
    }  
    return true;

}

void solve(int row){
    if(row == 8){
        cnt++;
        return;
    }

    for (int col = 0; col < 8; col++)
    {
        if(vec[row][col] == '*') continue;
        if(isvalid(vec,row,col)){
            vec[row][col] = 'Q';
            solve(row+1);
            vec[row][col] = '.';
        }
    }
    

}

int main(){
    
    for(int i=0;i<8;i++){
        cin>>vec[i];
    }
    solve(0);
    cout<<cnt<<'\n';
    return 0;
}
