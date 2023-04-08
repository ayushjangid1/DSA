#include<bits/stdc++.h>
using namespace std;

int main(){

int n, m;
    cin >> n >> m;

    char arr[n][m];

    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;
    bool flag= true;
    while (row_start <= row_end && col_start <= col_end)
    {

        for (int col = col_start; col <= col_end; col++)
        {
            if(flag==true)
            arr[row_start][col]='x';

            if(flag==false)
            arr[row_start][col]='o';
        }
        row_start++;

        for (int row = row_start; row <= row_end; row++)
        {
            if(flag==true)
            arr[row][col_end]='x';

            if(flag==false)
            arr[row][col_end]='o';

        }
        col_end--;

        for (int col = col_end; col >= col_start; col--)
        {
            if(flag==true)
            arr[row_end][col]='x';
            
            if(flag==false)
            arr[row_end][col]='o';

        }
        row_end--;

        for (int row = row_end; row >= row_start; row--)
        {
            if(flag==true)
            arr[row][col_start]='x';
            
            if(flag==false)
            arr[row][col_start]='o';

        }
        col_start++;

        // switching the elements to be pushed 
        if(flag==true)
        flag=false;
        else
        flag=true;
    }
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}