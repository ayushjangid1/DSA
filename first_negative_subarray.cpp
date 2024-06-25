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
    deque<int> dq;
    for(int i=0;i<k;i++){
        if(arr[i] < 0)dq.push_back(i);
    }
    if(dq.empty())cout<<"0 ";
    else cout<<arr[dq.front()]<<" ";
    for(int i=k;i<n;i++){
        int add_ind = i;
        int rem_ind = i-k;
        if(dq.front() == rem_ind)dq.pop_front();
        if(arr[add_ind] < 0)dq.push_back(add_ind);
        if(dq.empty())cout<<"0 ";
        else cout<<arr[dq.front()]<<" ";
    }

    return 0;
}