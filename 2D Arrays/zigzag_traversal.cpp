#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    
    int row=0,col=0;
    while(row<=n && col<=m){
        int row_temp = row,col_temp=col;

        while(row_temp>=0 && col_temp<m){
            cout<<arr[row_temp][col_temp]<<" ";
            row_temp--;
            col_temp++;
        }

        if(row!=n-1){
            row++;
            cout<<"\n";
        }
        else{
            col++;
            cout<<"\n";
        }
    }



    return 0;
}