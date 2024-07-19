#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;



int main(){

    ll n,i,j;
    cin>>n;
    vector<ll> arr(n,0);
    for(i=0;i<n;i++){
        cin>>arr[i];
    } 
    sort(arr.begin(),arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    }
cout<<endl;
    return 0;
}