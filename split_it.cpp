#include<bits/stdc++.h>
using namespace std;

float is_palindrome(string str){
    string temp_str = str;
    reverse(temp_str.begin(),temp_str.end());
    if(temp_str == str){
        return true;
    }
    return false;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        string str1 = "";
        string str2 = "";
        int i= 0 ;
        int tk = k;
        while(tk--){
            str1 +=str[i];
            str2 += str[n-1-i]; 
            i++;
        }
        reverse(str2.begin(),str2.end());
        str1 += str2;
        cout << k<<" "<<(n+1)/2<<" "<<(k==(n+1/2))<<" "<<is_palindrome(str1)<<endl;
        cout<<(0 && 1)<<endl;
        if(k!=(n+1/2) && is_palindrome(str1) ){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}