#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt_even=0,cnt_odd=0;
        if(n&1){
            cout<<"-1"<<endl;
            continue;
        }
        for(auto i = 0;i<n;i++){
            if(arr[i]%2 == 0){
                cnt_even++;
            }
            else{
                cnt_odd++;
            }
        }
        cout<<abs(cnt_even-cnt_odd)/2<<endl;

    }

    return 0;
}