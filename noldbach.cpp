#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n){

    for(int j =2;j*j<=n;j++){
        if(n%j == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> prime;
        for(int i=2;i<=n;i++){
            bool flag = isPrime(i);
            if(flag == true){
                prime.push_back(i);
            }
        }
        ll ans = 0;
        for(int i=1;i<prime.size();i++){
            
            if(isPrime(1 + prime[i-1] + prime[i]) && (1 + prime[i-1] + prime[i]) <= n){
                ans++;
            }
        }
        if(ans >= k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}