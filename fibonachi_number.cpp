#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}

int main(){

    int n;
    cin>>n;
    // cout<<fibo(n);
    int prev1 = 0;
    int prev2 = 1;

    if(n== 0){
        cout<<"0"<<endl;
    }
    else if(n == 1){
        cout<<"1"<<endl;
    }
    int num =0;
    while(n>2){
        num = prev1 + prev2;
        prev1 = prev2;
        prev2= num;
        n--;
    }
    cout<< num<<endl;

    return 0;
}