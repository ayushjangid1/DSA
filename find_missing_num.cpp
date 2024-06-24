#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n-1,0);
        int curr_sum =0;
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
            curr_sum += arr[i];
        }
        int act_sum = n*(n+1)/2;;
        // for(int i=1;i<=n;i++){
        //     act_sum += i;
        // }
        
        // cout<<act_sum<<endl;
        // cout<<curr_sum<<endl;
        cout<<act_sum-curr_sum<<endl;
    }

    return 0;
}