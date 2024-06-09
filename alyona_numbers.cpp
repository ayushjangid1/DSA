#include<bits/stdc++.h>
using namespace std;

#define ll long long 

 main(){

    ll  n,m;
    cin>>n>>m;

    vector<ll > a(5,0),b(5,0);
    for( ll i=1;i<=n;i++){
        a[i%5]++;
    }
    for(ll i=1;i<=m;i++){
        b[i%5]++;
    }
    ll  ans = 0;
    ans += (a[0]*b[0]);
    ans += (a[1]*b[4]);
    ans += (a[2]*b[3]);
    ans += (a[3]*b[2]);
    ans += (a[4]*b[1]);
    cout<<ans<<endl;

    return 0;
}