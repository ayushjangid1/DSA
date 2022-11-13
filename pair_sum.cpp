#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1])
            break;
    }
    int l=(i+1);
    int r = i;
    bool flag= false;
    while(l!=r){
        if(arr[l] + arr[r] == target)
            flag==true;
        if(arr[l]+arr[r]<target){
            l=(l-1)%n;
        }
        else{
            
            r=(n+r-1)%n;
        }
    }
    if(flag){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}