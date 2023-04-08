#include<bits/stdc++.h>
using namespace std;

void printDup(string s){
    int n = s.size();
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    for(auto i : mp){
        if(i.second>1){
            cout<<i.first<<", count = "<<i.second<<endl;
        }
    }
}
int main(){

    string str;
    getline(cin,str);

    printDup(str);

    return 0;
}