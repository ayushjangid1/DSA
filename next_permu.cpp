#include<bits/stdc++.h>
using namespace std;

// i=end index.
// 1. if(arr[i]<arr[i+1]) index_1 = i;
// 2. if(arr[j]>arr[i]) index_2 = j;
// 3. swap arr[index_2] with arr[index_2];
// 4. reverse from index_1 + 1 to last;

int main(){
    int n,arr[n];cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k,l;
    for(k=n-2;k>=0;k--){
        if(arr[k]<arr[k+1]){
            break;
        }
    }
    if(k<0){
        reverse(arr,arr+n);
    }
    else{
        for(l=n-1;l>=0;l--){
            if(arr[l]>arr[k]){
                break;
            }
        }
        swap(arr[k],arr[l]);
        reverse(arr + k +1,arr+n);
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}