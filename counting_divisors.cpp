#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int gcd(int a,int b){
    if(a==0){
        return b;
    }

    return gcd(b%a,a);
}

int main(){

    int n;
    cin>>n;
    vector<int> vec(n,0);
    vector<int> divisors(1e6+1,0);
    for(auto &i:vec){
        cin>>i;
    }

    for(int i=1;i<=1e6;i++){
        for(int j=i;j<=1e6;j+=i){
            divisors[j]++;
        }
    }

    for(auto i:vec){
        cout<<divisors[i]<<endl;
    }

    return 0;
}