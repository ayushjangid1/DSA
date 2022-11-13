#include<bits/stdc++.h>
using namespace std;

int search_bin(int arr[],int n,int target){
    int st=0,en=n-1,mid;
    while(st<=en){
        mid=(st+en)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            en=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}


int sorted_search(int arr[],int n,int target){
    int pivot = arr[0];
    int st=0,en = n-1,mid;
    while(st<=en){
        mid = (st+en)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>pivot && arr[mid]>target){
            st=mid+1;
        }
        else if(arr[mid]<pivot && arr[mid]>target){
            en=mid-1;
        }
        else if(arr[mid]<pivot && arr[mid]<target){
            st=mid+1;
        }
    }
    return -1;

}


int main(){

    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(arr[0]>arr[n-1]){
        
        cout<<sorted_search(arr,n,target)<<endl;
    }
        else
        cout<<search_bin(arr,n,target)<<endl;

    return 0;
}