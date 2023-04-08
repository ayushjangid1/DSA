#include<bits/stdc++.h>
using namespace std;

int palindromic_strings(string strings){
    int n = strings.size();
    int ans=0,l,r;
    for(int i=0;i<n;i++){
        l=i;
        r=i;
        while(l>=0 && r<n && strings[l] == strings[r]){
            ans++;
            l--;
            r++;
        }
        l=i;
        r=i+1;
        while(l>=0 && r<n && strings[l] == strings[r]){
            ans++;
            l--;
            r++;
        }
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<palindromic_strings(s);
return 0;
}