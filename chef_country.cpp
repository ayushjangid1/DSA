#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main(){

    int n,m;
    cin>>n>>m;

    map<string,string> mp;
    for(int i=0;i<n;i++){
        string name,country;
        cin>>name>>country;
        mp[name] = country;
    }

    map<string,int> chefVotes;
    map<string,int> countryVotes;

    for(int i=0;i<m;i++){
        string nm;
        cin>>nm;
        chefVotes[nm]++;
        countryVotes[mp[nm]]++;
    }

    int cnt = 0;
    string ans = "";
    for(auto i:countryVotes){
        if(i.second > cnt){
            cnt = i.second;
            ans = i.first;
        }
    }

    cout<<ans<<endl;

    cnt = 0;
    ans = "";
    for(auto i:chefVotes){
        if(i.second > cnt){
            cnt = i.second;
            ans = i.first;
        }
    }
    cout<<ans<<endl;

    return 0;
}