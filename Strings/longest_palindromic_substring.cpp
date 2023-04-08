#include<iostream>
#include<string>
using namespace std;

string longest_palindromic_substring(string s){
    int n= s.size();
    string ans = "";
    int len = 0;
    int left,right;
    for(int i=0;i<n;i++){
        left= i,right=i;
        while(left>=0 && right <n && s[left]==s[right]){
            if(right-left+1>len){
                ans = s.substr(left,right-left+1);
                len = right-left+1;
            }
            left--;
            right++;
        }

        left=i,right=i+1;
        while(left>=0 && right <n && s[left]==s[right]){
            if(right-left+1>len){
                ans = s.substr(left,right-left+1);
                len = right-left+1;
            }
            left--;
            right++;
        }
    }
    return ans;
}

int main(){

    string s;
    cin>>s;
    cout<<longest_palindromic_substring(s);
}