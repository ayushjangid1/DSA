#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int power_2 = 0,power_3 = 0;
        while(n%2 == 0){
            power_2 += 1;
            n/=2;
        }
        while(n%3 == 0){
            power_3 += 1;
            n/=3;
        }
        if(n>1 || power_2 > power_3){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            cout<<(power_3-power_2) + power_3<<endl;
        }
    }

    return 0;
}