#include <bits/stdc++.h>
using namespace std;

#define m 4
#define n 5


// it works because the elements are sorted
int common_elements(int mat[m][n]){
    unordered_map<int,int> mp;

    int i,j;
    for(i = 0;i<m;i++){

        // adds first element of each row to map
        mp[mat[i][0]]++;
        for(j=1;j<n;j++){

            // checks if two consecutive elements are same if yes then don't add to the map
            if(mat[i][j] != mat[i][j-1]){
                mp[mat[i][j]]++;
            }
        }
    }
    for(auto it:mp){
        if(it.second == m){
            return it.first;
        }
    }
    return -1;
}

int main()
{

    
    int mat[m][n] = {
        {5, 2, 3, 4, 5},
        {2, 4, 5, 8, 9},
        {3, 2, 5, 9, 10},
        {1, 3, 2, 7, 9},
    };

    int result = common_elements(mat);

    if (result == -1)
        cout << "No common element";
    else
        cout << "Common element is " << result;

    return 0;
}