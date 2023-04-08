#include<bits/stdc++.h>
using namespace std;

string min_win_sub(string s,string p){

    int mp[256] = {0};
    int ans = INT_MAX;
    int start = 0;
    int count = 0;

    for(int i=0;i<p.size();i++){
        if(mp[p[i]]==0){
            count++;
        }
        mp[p[i]]++;
    }

    int i=0,j=0;
    while(j<s.size()){
        mp[s[j]]--;
        if(mp[s[j]]==0){
            count--;
        }
        if(count==0){
            while(count==0){
                if(ans > j-i+1){
                    ans = min(ans,j-i+1);
                    start = i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    count++;
                }
                i++;
            }
        }
        j++;
    }
    if(ans!=INT_MAX){
        return s.substr(start,ans);
    }
    else{
        return "-1";
    }
}

int main(){
    string s;
    cin>>s;
    string p;
    cin>>p;
    cout<<min_win_sub(s,p);

    return 0;
}