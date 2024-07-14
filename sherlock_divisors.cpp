#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n)
{

    for (int j = 2; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if(n%i == 0){
                ll div1 = i;
                ll div2 = n/i;
                if(div1 % 2 == 0){
                    ans++;
                }
                if(div2 != div1){
                    if(div2%2==0){
                        ans++;
                    }
                }
            }
        }
        if(n%2 == 0){
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}