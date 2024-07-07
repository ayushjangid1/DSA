#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

bool check(int mid,vector<int> arr,int k){
    vector<int> cnt(k+1);
    int curr = 0;
    for(int i=0;i<mid;i++){
        cnt[arr[i]]++;
        if(cnt[arr[i]] == 1){
            curr++;
        }
    }
    if(curr < k){
        return true;
    }
    for(int i = mid;i<arr.size();i++){
        cnt[arr[i-mid]]--;
        if(cnt[arr[i-mid]] == 0){
            curr--;
        }
        cnt[arr[i]]++;
        if(cnt[arr[i]] == 1){
            curr++;
        }
        if(curr<k){
            return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){

    int n,k;
    cin>>n>>k;

    vector<int> arr(n,0);
    for(auto &i : arr)cin>>i;
    int ans = 1;
    int l=1,r=n;
    while(l<= r){
        int mid = (l+r)/2;
        if(check(mid,arr,k)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r= mid -1;
        }
    }
    cout<<ans<<endl;
    }

    return 0;
}