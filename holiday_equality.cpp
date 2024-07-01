#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi = max(maxi,arr[i]);
        }
        int cost = 0;
        for(int i=0;i<n;i++){
            cost += (maxi - arr[i]);
        }
        cout<<cost<<endl;
    }
    return 0;
}