#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        for(int i=0;i<s.length();i+=2){
            for(int j=0;j<s.length();j+=2){
                if(s[i] < s[j]){
                    char temp  = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        cout<<s<<endl;
    }

    return 0;
}