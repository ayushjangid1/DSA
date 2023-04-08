#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix;
    for(int i=0;i<n;i++){
    vector<int> temp;
        for(int j=0;j<m;j++){
            int t;
            cin>>t;
            temp.push_back(t);
        }
        matrix.push_back(temp);
    }
    vector<int> ans;
    int col_start =  0;
    int col_end=m-1;
    int row_start=0;
    int row_end=n-1;
    int count=0;
    int total = n*m;
    while(count<total){
        for(int col = col_start;col<=col_end && count<total;col++){
            ans.push_back(matrix[row_start][col]);
            count++;
        }
        row_start++;
        for(int row = row_start;row<=row_end && count<total;row++){
            ans.push_back(matrix[row][col_end]);
            count++;
        }
        col_end--;
        for(int col = col_end;col>=col_start && count<total;col--){
            ans.push_back(matrix[row_end][col]);
            count++;
        }
        row_end--;
        for(int row = row_end;row>=row_start && count<total;row--){
            ans.push_back(matrix[row][col_start]);
            count++;
        }
        col_start++;
    }

    for(auto i : ans ){
        cout<<i<<" ";
    }
    return 0;
}