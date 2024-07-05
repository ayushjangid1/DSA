#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string num;
        cin>>num;

        int i=0;
        bool flag = true;
        while(i < num.size()){
            if(i+2<num.size() && num.substr(i,3)=="144"){
                i+=3;
            }
            else if(i+1<num.size() && num.substr(i,2)=="14"){
                i+=2;
            }
            else if(num[i] == '1'){
                i++;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}