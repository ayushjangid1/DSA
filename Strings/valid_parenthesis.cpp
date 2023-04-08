#include "bits/stdc++.h"
using namespace std;

bool parenthesis(string s){
    stack<char> st;

    for(int i =0 ;i<s.size();i++){
        if((s[i]=='(') || (s[i]=='[') || (s[i]=='{')){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            char ch = st.top();
            st.pop();
            if((s[i]==')' && ch=='(') || (s[i]==']' && ch=='[') || (s[i]=='}' && ch=='{')){
                continue;
            }
            else{
                return false;
            }
        }
    }
    if(st.empty())
        return true;

    return false;
}

int main(){

    string s;
    cin>>s;
    bool flag = parenthesis(s);
    if(flag){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Unbalanced"<<endl;
    }

    return 0;
}