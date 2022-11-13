#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_pro = INT_MAX;
    int pro_now = 0;
    int pro=0;

    for(int i=0;i<n;i++){
        if(arr[i]<max_pro){
            max_pro=arr[i];
        }
        pro_now=arr[i]-max_pro;
        if(pro_now>pro){
            pro=pro_now;
        }

    }
    cout<<pro<<endl;
    return 0;
}