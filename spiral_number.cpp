#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;
    while(t--){
        ll r,c;
        cin>>r>>c;

        ll ans = 0;
        if(r >= c){
            ans = (r-1) * 1ll * (r-1);
            if(r % 2 == 0){
                ans += r + (r-c);
            }
            else{
                ans += c;
            }
        }
        else{
            ans = (c-1) * 1ll * (c-1);
            if(c % 2 == 1){
                ans += c + (c-r);
            }
            else{
                ans += r;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}