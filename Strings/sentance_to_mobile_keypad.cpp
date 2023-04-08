#include<bits/stdc++.h>
using namespace std;

string printsequence(string arr[],string inp){
    int n = inp.size();
    string out = "";
    for(int i=0;i<n;i++){
        if(inp[i]==' '){
            out+="0";
        }
        else{
            int pos = inp[i]-'A';
            out += arr[pos];
        }
    }
    return out;
}

int main(){

    string str[]
        = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };

    string input;
    getline(cin,input);
    cout<<printsequence(str,input);

    return 0;
}