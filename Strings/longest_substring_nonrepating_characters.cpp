#include<bits/stdc++.h>
using namespace std;

int long_substr(string s){
    int n =s.size(), len=0,left=0,right=0;
    vector<int> mp(256,-1);
    while(right<n){
        if(mp[s[right]]!=-1){
            left = max(mp[s[right]]+1,left);
        }
        mp[s[right]]=right;
        len=max(len,right-left+1);
        right++;
    }
    return len;
}

int main(){
    string s = "abcabcabc";
    cout<<long_substr(s)<<endl;

    return 0;
}