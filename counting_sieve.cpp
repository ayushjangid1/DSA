#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        vector<int> sieve(100001,0);
        for(int i=1;i<=100000;i++){
            for(int j = i;j<=100000;j+=i){
                sieve[j]++;
            }
        }
        int n;
        cin>>n;
        while(n--){
            int k;
            cin>>k;
            cout<<sieve[k]<<endl;
        }
    }

    return 0;
}