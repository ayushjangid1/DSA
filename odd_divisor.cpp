#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;
    while(t--){
        ll p;
        cin>>p;

        while(p%2 == 0)p/=2;
        if(p==1)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

    return 0;
}