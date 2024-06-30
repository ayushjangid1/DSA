#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){

    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;

        if(b==1){
            cout<<"No"<<endl;
        }
        else if(b==2){
            cout<<"Yes"<<endl;
            cout<<a<<" "<<3*a<<" "<<4*a<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            cout<<a<<" "<<(b-1)*a<<" "<<a*b<<endl;
        }

    }

    return 0;
}