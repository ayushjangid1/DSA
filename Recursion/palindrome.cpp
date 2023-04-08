#include<bits/stdc++.h>
using namespace std;

bool pali(int i,string str,int n){
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    return pali(i+1,str,n);
}

int main(){

    int n;
    cin>>n;
    string str;
    cin>>str;
    cout<<pali(0,str,n);
    
    return 0;
}