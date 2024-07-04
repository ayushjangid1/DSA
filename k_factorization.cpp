#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    ll i = 2, cnt = 0;
    vector<int> divisors;
    while (n != 1)
    {
        bool flag = false;

        while (n % i == 0)
        {
            if (cnt == (k - 1))
            {
                flag = true;
                break;
            }
            divisors.push_back(i);
            n /= i;
            cnt++;
        }

        if (flag)
            break;
        i++;
    }

    if (cnt == (k - 1) && n > 1)
    {
        for (auto i : divisors)
            cout << i << " ";
        cout << n << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}