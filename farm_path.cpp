#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = n;
    for(int k=1;k<n;k++){
        set<string> st;
        for(int j=0;j<=n-k;j++){
            st.insert(s.substr(j,k));
        }
        if(st.size() == (n-k+1)){
            ans = k;break;
        }
    }
    cout<<ans<<endl;

    return 0;
}