#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = arr[0];
    int MAX=ans,MIN=ans;
    for(int i=1;i<n;i++){
        if(arr[i]<0){
            swap(MAX,MIN);
        }
        MAX = max(arr[i],MAX*arr[i]);
        MIN = min(arr[i],MIN*arr[i]);
        ans=max(ans,MAX);
    }
    cout<<ans<<endl;

    return 0;
}