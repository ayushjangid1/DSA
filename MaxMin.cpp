#include<bits/stdc++.h>
using namespace std;

//Time complexity = O(n);

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int Max = INT_MIN,Min=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>Max)
            Max = arr[i];
        
        if(arr[i]<Min)
            Min=arr[i];
    }
    cout<<"Maximum number is : "<<Max<<endl;
    cout<<"Minimum number is : "<<Min<<endl;

    return 0;
}