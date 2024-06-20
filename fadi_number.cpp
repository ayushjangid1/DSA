#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll x;
    cin >> x;
    ll ans = LLONG_MAX;

    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ll g = __gcd(i, x/i);

            if (g == 1)
            {
                ans = min(ans, max(i, x / i));
            }
        }
    }
    cout <<ans<<" "<<x/ans<<endl;

    return 0;
}