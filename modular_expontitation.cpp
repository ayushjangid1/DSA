#include <bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;
#define int long long

int power(int a,int b){
    if(b==0){
        return 1;
    }

    int half_power = power(a,b/2);
    if(b%2 == 0){
        return (half_power% Mod) * (half_power%Mod) % Mod;
    }
    else{
        return (half_power%Mod) * (half_power%Mod) % Mod * (a % Mod) % Mod;
    }
}

int main()
{

    int a,b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<ans<<endl;

    return 0;
}