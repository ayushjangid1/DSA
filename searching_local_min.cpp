#include<bits/stdc++.h>
using namespace std;

#define ll long long 

const ll Mod = 1e9 + 7;
const ll Inf = LLONG_MAX >> 1;

map<ll,ll> prevIndex;
ll n;
ll query(ll index){
    if(prevIndex.contains(index)){
        return prevIndex[index];
    }
    if(index == 0 || index == n+1){
        return Inf;
    }
    cout<<"? "<<index<<endl;
    ll value;
    cin>>value;
    return prevIndex[index] = value;
}

int main(){

    cin>>n;
    ll l=0,r=n+1;
    while(r-l > 1){
        ll m = (l+r)/2;
        (query(m-1) > query(m)) ? (l=m) : (r=m);
    }
    cout<<"! "<<l<<endl;

    return 0;
}