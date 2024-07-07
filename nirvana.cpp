#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int p=1;
    n++;

    auto prod = [] (int k){
        int z = 1;
        while(k != 0){
            z *= k%10;
            k/=10;
        }
        return z;
    };

    while(n!=0){
        ans = max(ans, prod(n * p -1));
        n/=10;
        p*=10;
    }
    cout<<ans<<endl;

    return 0;
}