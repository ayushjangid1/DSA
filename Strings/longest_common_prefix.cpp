#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int st;
        string ans="",temp="";
        bool flag = false;
        for(auto i:strs){
            if(i == strs[0] && flag == false){
                ans+=i;
                flag= true;
            }
            for(st=0;st<i.size();st++){
                if(st==0){
                    temp = ans;
                    ans="";
                }
                if(i[st]==temp[st]){
                    ans+=i[st];
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }

int main(){

    int n;cin>>n;
    vector<string> strs(n);
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        strs.push_back(temp);
    }
    string ans = longestCommonPrefix(strs);
    cout<<ans<<endl;

    return 0;
}