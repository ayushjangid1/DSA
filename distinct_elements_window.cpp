#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main(){

    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    map<int,int> mp;
    vector<int> ans;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    ans.push_back(mp.size());
    for(int i=k;i<n;i++){
        if(mp[arr[i-k]] == 1)mp.erase(mp[arr[i-k]]);
        else mp[arr[i-k]]--;
        mp[arr[i]]++;
        ans.push_back(mp.size());
    }
    for(auto i:ans)cout<<i<<" ";

    return 0;
}