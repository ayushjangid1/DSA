#include<bits/stdc++.h>
using namespace std;

void reverse_arr(int arr[],int start , int end){
    if(start>end){
        return;
    }
    int temp = arr[start];
    arr[start]= arr[end];
    arr[end] = temp;

    reverse_arr(arr,start+1,end-1);
}

// void reverse_arr(int arr[], int n){
//     int start = 0;  
//     int end = n-1;
//     while(start<end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;

//     }
// }

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse_arr(arr,0,n-1);
    printArr(arr,n);   

    return 0;
}