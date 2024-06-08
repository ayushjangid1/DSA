#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n,0);
        for(auto &i:v){
            cin>>i;
        }
        
        ll ans = 0;
        for(int i=0;i<n;i++){
            ll maxi = -2e18;

            int j = i;
            while(j < n and ((v[i] < 0 and v[j] < 0) or (v[i] > 0 and v[j] > 0))){
                maxi = max(maxi,v[j]);
                j++;
            }
            ans += maxi;
            i = j - 1;
        }
        cout<<ans<<endl;
    }

    return 0;
}