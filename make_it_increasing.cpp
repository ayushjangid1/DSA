#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        vector<int> arr(n,0);
        for(i = 0;i<n;i++){
            cin>>arr[i];
        }

        int ans = 0;
        for(i=n-2;i>=0;i--){
            if(arr[i+1] == 0)break;
            while(arr[i] >= arr[i+1]){
                arr[i] /=2;
                ans++;
            }
        }
        if(i >= 0)cout<<"-1\n";
        else cout<<ans<<endl;
    }

    return 0;
}