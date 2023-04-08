#include<iostream>
#include<string>
using namespace std;


void print_name(int n,string str){
    if(n==0){
        return;
    }
    cout<<str<<endl;
    print_name(n-1,str);
}

int main(){

    int n;
    cin>>n;
    string str;
    cin>>str;
    print_name(n,str);
    return 0;
}