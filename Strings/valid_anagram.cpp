#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    bool flag = true;
    if(s1.compare(s2)!=0)
        flag = false;

    if(flag){
        cout<<"true"<<endl;
    }
    else
        cout<<"false"<<endl;


    return 0;
}