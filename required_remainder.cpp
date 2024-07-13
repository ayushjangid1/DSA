#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int rem = n %x ;
        if(rem >= y){
            int diff = rem-y;
            cout<<n-diff<<endl;
            continue;
        }
        n = n-(rem+1);
        rem = n % x;
        if(rem>= y){
            int diff = rem-y;
            cout<<n-diff<<endl;
        }
    }

    return 0;
}