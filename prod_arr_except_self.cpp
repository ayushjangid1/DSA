#include <bits/stdc++.h>
using namespace std;

// 1. calculate product of all the elements in the array.
// 2. if there are more than 1 zero's in the array then add zeros in the ans.
// 3. if only one zero in the array then don't count that for that index.

int main()
{

    int n;
    cin >> n; int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mul = 1,count_zeros = 0, idx;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 && flag == false)
        {
            idx = i;
            count_zeros++;
            flag = true;
            continue;
        }
        if (arr[i] == 0 && flag == true)
        {
            mul = 0;
        }
        mul *= arr[i];
    }
    vector<int> ans;
    if (mul == 0)
    {
        for (int i = 0; i < n; i++)
        {
            ans.push_back(0);
        }
    }
    else if (mul != 0 && flag == true)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == idx)
            {
                ans.push_back(mul);
                continue;
            }
            ans.push_back((mul * arr[idx]) / arr[i]);
        }
    }
    else if (mul != 0 && flag == false)
    {
        for (int i = 0; i < n; i++)
        {
            ans.push_back(mul / arr[i]);
        }
    }
    for(auto i: ans){
        cout<<i<<" ";
    }


    return 0;
}