#include"bits/stdc++.h"
using namespace std;

            // bfs(row,col+1,vis,grid);
            // bfs(row+1,col+1,vis,grid);
            // bfs(row+1,col,vis,grid);
            // bfs(row+1,col-1,vis,grid);
            // bfs(row,col-1,vis,grid);
            // bfs(row-1,col-1,vis,grid);
            // bfs(row-1,col,vis,grid);
            // bfs(row-1,col+1,vis,grid);

void bfs(int row,int col, vector<vector<int>> &vis,vector<vector<char>>&grid){
    int n = grid.size();
    int m = grid[0].size();
    vis[row][col] = 1;
    queue<pair<int,int>> q;
    q.push({row,col});
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for(int delrow=-1;delrow<=1;delrow++){
            for(int delcol = -1;delcol<=1;delcol++){
                int nrow = row+delrow;
                int ncol = col+delcol;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
}

int number_of_islands(vector<vector<char>> &grid){
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n, vector<int>(m,0));
    int count=0;
    for(int row=0;row<n;row++){
        for(int col= 0;col<m;col++){
            if(!vis[row][col] && grid[row][col]=='1'){
                count++;
                bfs(row,col,vis,grid);
            }
        }
    }
    return count;

}

int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<char>> grid(n, vector<char>(n,'#'));
    for(int i=0;i<n;i++){
        for(int j = 0 ;j<n;j++){
            cin>>grid[i][j];
        }
    }
    cout<<number_of_islands(grid);

    return 0;
}


// class Solution {
// private:
//     void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>> grid){

//         int n = grid.size();
//         int m = grid[0].size();
//         vis[row][col] = 1;
//         queue<pair<int,int>>que;
//         que.push({row,col});

//         while(!que.empty()){
//             int row = que.front().first;
//             int col = que.front().second;
//             que.pop();

//             for(int del_row=-1;del_row<=1;del_row++){
//                 for(int del_col=-1;del_col<=1;del_col++){
//                     int n_row = row + del_row;
//                     int n_col = col + del_col;

//                     if(n_row>=0 && n_row<n && n_col>=0 && n_col <m && !vis[n_row][n_col] && grid[n_row][n_col]=='1'){
//                         vis[n_row][n_col] = 1;
//                         que.push({n_row,n_col});
//                     }
//                 }
//             }

//         }
//     }
// public:
//     int numIslands(vector<vector<char>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<int>> vis(n, vector<int>(m,0));
//         int cnti=0;
//         for(int row = 0 ;row<n;row++){
//             for(int col=0;col<m;col++){
//                 if(!vis[row][col] && grid[row][col]=='1'){
//                     cnti++;
//                     bfs(row,col,vis,grid);
//                 }
//             }
//         }
//         return cnti;
//     }
// };