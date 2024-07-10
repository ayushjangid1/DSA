#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll power(ll a,ll b){
    if(b==0){
        return 1*1ll;
    }

    ll half_power = power(a,b/2);
    if(b%2 == 0){
        return half_power * half_power;
    }
    else{
        return half_power * half_power * a;
    }
}

int main()
{

    ll a,b;
    cin>>a>>b;
    ll ans = power(a,b);
    cout<<ans<<endl;

    return 0;
}