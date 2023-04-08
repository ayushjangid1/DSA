#include<bits/stdc++.h>
using namespace std;

int lps(string s){
    int n =s.size();
    vector<int> lp(n,0);
    int j =0,i=1;
    while(i<n){
        if(s[i]==s[j]){
            lp[i]=j+1;
            i++;
            j++;
        }
        else{
            if(j!=0){
                j = lp[j-1];
            }
            else{
                i++;
            }
        }
    }
    return lp.back();
}

int main(){

    string str;
    cin>>str;
    cout<<lps(str);

    return 0;
}