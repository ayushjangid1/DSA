#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<pair<int,int>,int>> q;
        int cnt_fresh=0;
        int vis[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }
                else{
                    vis[i][j] = 0;
                }
                if(grid[i][j] == 1)
                    cnt_fresh++;
            }
        }

        int time_ = 0;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
            int cnt=0;
        while(!q.empty()){
            int ro = q.front().first.first;
            int cl = q.front().first.second;
            int tr = q.front().second;
            time_ = max(time_,tr);
            q.pop();
            for(int i=0;i<4;i++){
                int new_row = ro + delrow[i];
                int new_col = cl + delcol[i];
                if(new_row >= 0 && new_row<n && new_col >=0 && new_col<m && vis[new_row][new_col] == 0 && grid[new_row][new_col] == 1){
                    cnt++;
                    q.push({{new_row,new_col},tr+1});
                    vis[new_row][new_col] = 2;
                }
            }
        }
        if(cnt!=cnt_fresh){
            return -1;
        }
        return time_;
    }

int main(){
    vector<vector<int>> grid = {{2,1,1},{1,1,0},{0,1,1}};

    cout<<orangesRotting(grid)<<endl;
    return 0;
}