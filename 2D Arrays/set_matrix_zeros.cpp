#include"bits/stdc++.h"
using namespace std;

void set_zeros(vector<vector<int>> &matrix){
    // int col = 1, row = matrix.size(), cols = matrix[0].size();

    // for(int i=0;i<row;i++){
    //     if(matrix[i][0]==0)
    //         col=0;
    //     for(int j=1;j<cols;j++){
    //         if(matrix[i][j] == 0){
    //             matrix[i][0]=matrix[0][j]=0;
    //         }
    //     }
    // }

    // for(int i=row-1;i>=0;i--){
    //     for(int j=cols-1;j>=1;j--){
    //         if(matrix[i][0] == 0 || matrix[0][j] == 0){
    //             matrix[i][j] == 0;
    //         }
    //     }
    //     if(col==0){
    //         matrix[i][0] = 0;
    //     }
    // }

    int colom= 1,rowes = matrix.size(),coloes = matrix[0].size();
        for(int i=0;i<rowes;i++){
            if(matrix[i][0]==0){
                colom=0;
            }
            for(int j=1;j<coloes;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=matrix[0][j]=0;
                }
            }
        }
        for(int i=rowes-1;i>=0;i--){
            for(int j=coloes-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j] == 0){
                    matrix[i][j]=0;
                }
            }
                if(colom==0){
                    matrix[i][0]=0;
                }
        }
}

int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int> (m));
    for(auto &i:arr){
        for(auto &j:i){
            cin>>j;
        }
    }

    set_zeros(arr);

    for(auto i:arr){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}