#include<bits/stdc++.h>
using namespace std;


// string remove_consecutive_characters(string s){
//     int n = s.size();
//     string ans;
//     if(n<=1){
//         ans+=s;
//     }
//     for(int i=0;i<n-1;i++){
//         if(s[i]==s[i+1]){
//             if(i+1==n-1){
//                 ans+=s[i];
//             }
//             continue;
//         }
//         else{
//             if(i+1==n-1){
//                 ans+=s[i];
//                 ans+=s[i+1];
//                 break;
//             }
//             ans+=s[i];
//         }
//     }
//     return ans;
// }

//two - pointer approach
string remove_consecutive_characters(string s){
    int st=0,en=0;
    int n =s.size();
    string ans;
    while(en!=n){
        if(s[st]!=s[en]){
            ans+=s[st];
            st=en;
        }
        else{
            en++;
        }
        if(en==n){

    ans+=s[st];
        }
    }
    return ans;
}


int main(){

    string s;
    cin>>s;
    string ans = remove_consecutive_characters(s);
    cout<<ans<<endl;
    return 0;
}