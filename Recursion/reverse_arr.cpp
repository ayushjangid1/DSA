#include<bits/stdc++.h>
using namespace std;

void rev_2(int i,int arr[], int n){
    if(i>=n/2)
        return;
    swap(arr[i],arr[n-i-1]);
    rev_2(i+1,arr,n);
}

void rev_1(int i,int j,int arr[]){
    if(i>=j){
        return;
    }
    swap(arr[i],arr[j]);
    rev_1(i+1,j-1,arr);
}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // rev_2(0,arr,n);
    rev_1(0,n-1,arr);
for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}