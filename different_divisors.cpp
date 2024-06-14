#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;
    while(t--){
        ll d;
        cin>>d;

        ll a,b;
        for(ll i=d+1; ;i++){
            int cnt = 0;
            for(int j=2;j*j<=i;j++){
                if(i%j == 0)cnt++;
            }
            if(cnt==0){
                a=  i;
                break;
            }
        }

        for(ll i=a+d; ;i++){
            int cnt = 0;
            for(int j=2;j*j<=i;j++){
                if(i%j == 0)cnt++;
            }
            if(cnt==0){
                b=i;
                break;
            }
        }
        cout<<min(a*b,a*a*b)<<endl;
    }

    return 0;
}