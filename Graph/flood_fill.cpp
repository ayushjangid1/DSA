//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

    void dfs(int sr,int sc,vector<vector<int>>& image,vector<vector<int>>& ans,int initial_color,int new_color,int del_row[],int del_col[]){
        ans[sr][sc] = new_color;
        int n = image.size();
        int m = image[0].size();
        for(int i=0;i<4;i++){
            int new_row = sr + del_row[i];
            int new_col = sc + del_col[i];
            if(new_row>=0 && new_col>=0 && new_row<n&& new_col < m && image[new_row][new_col] == initial_color && ans[new_row][new_col] != new_color){
                dfs(new_row,new_col,image,ans,initial_color,new_color,del_row,del_col);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int initial_color = image[sr][sc];
        int del_row[] = {-1,0,1,0};
        int del_col[] = {0,1,0,-1};
        vector<vector<int>> ans = image;
        dfs(sr,sc,image,ans,initial_color,newColor,del_row,del_col);
        return ans;
    }

int main(){
	
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		
		vector<vector<int>> ans = floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	return 0;
}
