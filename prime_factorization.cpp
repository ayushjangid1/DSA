#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> factor(ll n){
    vector<ll> facts;
    for(ll d=2;d*d<=n;d++){
        while(n%d == 0){
            facts.push_back(d);
            n/=d;
        }
    }
    if(n>1){
        facts.push_back(n);
    }
    return facts;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> ans = factor(n);
        for(auto i: ans){
            cout<<i<<" ";
        }
    }
    return 0;
}