#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main(){
    int t;
    cin>>t;
    while(t--){

    
    int n,z;
    cin>>n>>z;
    multiset<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.insert(a);
    }
    int ans = 0;
    while(z>0 && arr.size()){
        ans++;
        int a = *arr.rbegin();
        arr.erase(--arr.end());
        z-=a;
        a/=2;
        if(a>0)
            arr.insert(a);
    }

    if(z<=0)cout<<ans<<endl;
    else cout<<"Evacuate"<<endl;
    }
    return 0;
}