#include <bits/stdc++.h>
using namespace std;

using intt = long long;

bool isValid(int n, int m, int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}


void print(const vector<string> &grid){
    for (int i = 0; i < grid.size(); i++)
    {
        cout<<grid[i]<<'\n';
    }
    
}


void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> grid;

    for (int i = 0; i < n; i++)
    {
        string s ;
        cin>>s;
        grid.push_back(s);
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            set<char> st;
            st.insert(grid[i][j]); 
            // top
            if(isValid(n,m,i-1,j)){
                st.insert(grid[i-1][j]);
            }
            // left
            if(isValid(n,m,i,j-1)){
                st.insert(grid[i][j-1]);
            }

            bool vis = false;

            for(int k = 0 ;k < 4; k++){
                char temp ='A'+k;
                if(st.find(temp) == st.end()){
                    grid[i][j] = temp;
                    vis = true;
                    break;
                }
            }

            if(!vis){
                cout<<"IMPOSSIBLE"<<'\n';
                return;
            }

        }
        
    }
    print(grid);    


    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}