#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int left=0,right=n-1,left_max=0,right_max=0,water=0;

    while(left<=right){
        if(arr[left]<=arr[right]){
            if(arr[left]>=left_max){
                left_max=arr[left];
            }
            else{
                water += left_max - arr[left];
            }
            left++;
        }
        else{
            if(arr[right]>=right_max){
                right_max= arr[right];
            }
            else{
                water += right_max - arr[right];
            }
            right--;
        }
    }
    cout<<water<<endl;

    return 0;
}