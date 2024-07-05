#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main(){

    int n;cin>>n;
    int k;cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int maxi = INT_MIN;
    int sum = 0;
    for(int i=0;i<k;i++)sum+=arr[i];
    maxi = max(maxi,sum);
    for(int i=k;i<n;i++){
        int add_idx = i;
        int remove_idx = i-k;
        sum = sum + arr[add_idx] - arr[remove_idx];
        maxi = max(maxi,sum);
    }
    cout<<maxi<<endl;

    return 0;
}