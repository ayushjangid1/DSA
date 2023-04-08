#include<bits/stdc++.h>
using namespace std;


    bool present_word(vector<vector<char>>& board,string word,int n, int m,int row,int col, int idx){
        if(idx==word.size())
            return true;

        if(row<0 || col<0 || row>=n || col>=m || board[row][col] != word[idx]){
            return false;
        }
        char temp = board[row][col];
        board[row][col] = '*';
        bool sol1 = present_word(board, word, n, m, row+1, col, idx+1);
        bool sol2 = present_word(board, word, n, m, row, col+1, idx+1);
        bool sol3 = present_word(board, word, n, m, row-1, col, idx+1);
        bool sol4 = present_word(board, word, n, m, row, col-1, idx+1);
        board[row][col] = temp;
        return sol1 || sol2 || sol3 || sol4;
    }

bool exist(vector<vector<char>>& board, string word){
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j =0; j<m;j++){
                if(present_word(board,word,n,m,i,j,0))
                    return true;
            }
        }
        return false;
    }
int main (){
    vector<vector<char>> board;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        vector<char>temp;
        for(int j = 0;j<m;j++){
            char ch;
            cin>>ch;
            temp.push_back(ch);
        }
        board.push_back(temp);
    }

    string word;
    cin>>word;
    cout<<exist(board,word);

    
    return 0;
}