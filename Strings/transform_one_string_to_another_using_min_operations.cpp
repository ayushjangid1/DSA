#include<bits/stdc++.h>
using namespace std;

int min_ops(string s1,string s2){
    int count[256] = {0};
    int n = s1.size();
    int m = s2.size();
    if(n!=m){
        return -1;
    }
    for(int i=0;i<n;i++){
        count[s1[i]]++;
    }
    for(int i=0;i<n;i++){
        count[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i])
            return -1;
    }

    int res=0;
    for(int i=n-1,j=m-1;i>=0;){
        while(i>=0 && s1[i]!=s2[j]){
            i--;
            res++;
        }
        if(i>=0){
            i--;
            j--;
        }
    }
    return res;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<min_ops(s1,s2);

    return 0;
}