#include"bits/stdc++.h"
using namespace std;

int f(int i,int j,string &wild,string &text){
    if(i<0 && j<0)
        return true;

    if(i<0 && j>=0){
        return false;
    }
    if(i>=0 && j<0){
        for(int ii= 0;ii<i;ii++){
            if(wild[ii] != '*')
                return false;
            return true;
        }
    }
    if(wild[i] == text[j] || wild[i] == '?')
        return f(i-1,j-1,wild,text);
    if(wild[i] == '*'){
        return f(i-1,j,wild,text) | f(i,j-1,wild,text);
    }
    return false;
}

bool wildcard_matching(string wild,string text){
    int n = wild.size();
    int m = text.size();
    return f(n-1,m-1,wild,text);
}

int main(){

    string wild,text;
    cin>>wild>>text;
    cout<<wildcard_matching(wild,text);

    return 0;
}