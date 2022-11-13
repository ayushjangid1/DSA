#include <bits/stdc++.h>
using namespace std;

// 1. l = (l+1)%n and r= (n+r-1)%n is used for circular rotation.

int main()
{

    int n, target;
    cin >> n >> target;
    int i;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            break;
        }
    }
    int l = (i + 1) % n;
    int r = i;
    while (l != r)
    {
        if (arr[l] + arr[r] == target)
        {
            flag = true;
        }
        if (arr[l] + arr[r] < target)
        {
            l = (l + 1) % n;
        }
        else
        {
            r = (n + r - 1) % n;
        }
    }
    if (flag)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}