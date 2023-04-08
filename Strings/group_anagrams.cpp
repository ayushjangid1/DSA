#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> group_anagrams(vector<string> s){
    unordered_map<string,vector<string>> mp;
    for(string str:s){
        string t = str;
        sort(t.begin(),t.end());
        mp[t].push_back(str);
    }
    vector<vector<string>> anagrams;
    for(auto p : mp){
        anagrams.push_back(p.second);
    }
    return anagrams;
}

int main(){
    int n;cin>>n;
    vector<string> strs(n);
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        strs.push_back(temp);
    }
    vector<vector<string>> ans = group_anagrams(strs);
    for(auto i:ans){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}