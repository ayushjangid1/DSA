#include<bits/stdc++.h>
using namespace std;
#define no_of_char 256

void badmatch(string str,int size, int badchar[no_of_char]){
    int i;
    for(i=0;i<no_of_char;i++){
        badchar[i] = -1;
    }
    for(i=0;i<size;i++){
        badchar[str[i]] = i;
    }
}

void matching(string s1,string s2){
    int n = s1.size();
    int m = s2.size();
    int badchar[no_of_char];

    badmatch(s2,m,badchar);
    int s = 0;
    while(s<=(n-m)){
        int j = m-1;
        while(j>=0 && s2[j] == s1[s+j])
            j--;
        if(j<0){
            cout<<"Pattern occurs at shift = "<<s<<endl;
            s += (s+m<n)? m-badchar[s1[s+m]] : 1;
        }
        else{
            s += max(1,j-badchar[s1[s+j]]);
        }
    }

}

int main(){

    string s1,s2;
    cin>>s1>>s2;
    matching(s1,s2);

    return 0;
}