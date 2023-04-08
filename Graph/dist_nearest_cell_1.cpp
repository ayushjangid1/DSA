#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> nearest_1(vector<vector<int>> grid){
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n, vector<int>(m,0));
    vector<vector<int>> distance_(n, vector<int>(m,0));

    queue<pair<pair<int,int>,int>>q;
    for(int i=0;i<n;i++){
        for(int j= 0;j<m;j++){
            if(grid[i][j] == 1){
                q.push({{i,j},0});
                vis[i][j] = 1;
            }
            else{
                vis[i][j] = 0;
            }
        }
    }
    int delrow[] = {-1,0,1,0};
    int delcol[] = {0,1,0,-1};
    while(!q.empty()){
        int row = q.front().first.first;
        int col = q.front().first.second;
        int steps = q.front().second;
        q.pop();
        distance_[row][col] = steps;
        for(int i=0;i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow>=0 && nrow<n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0){
                q.push({{nrow,ncol},steps+1});
                vis[nrow][ncol]=1;
            }
        }
    }
    return distance_;
}

int main(){

    vector<vector<int>> grid = {{0,1,1,0},{1,1,0,0},{0,0,1,1}};
    vector<vector<int>> ans = nearest_1(grid);
    for(auto it:ans){
        for(auto itt:it){
            cout<<itt<<" ";
        }
        cout<<endl;
    }

    return 0;
}