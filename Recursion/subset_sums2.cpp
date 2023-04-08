#include <bits/stdc++.h>
using namespace std;

void subsets_2(int idx, vector<int> nums, vector<vector<int>> &subsets, vector<int> &subset)
{
    subsets.push_back(subset);
    for (int i = idx; i < nums.size(); i++)
    {
        if (i != idx && nums[i] == nums[i - 1])
            continue;
        subset.push_back(nums[i]);
        subsets_2(i + 1, nums, subsets, subset);
        subset.pop_back();
    }
}
vector<vector<int>> printUniqueSubsets(vector<int> &nums)
{
    
    vector<int> subset;
    vector<vector<int>> subsets;
    sort(nums.begin(), nums.end());
    subsets_2(0, nums, subsets, subset);
    return subsets;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<vector<int>> ans = printUniqueSubsets(nums);
    sort(ans.begin(), ans.end());
    //   printAns(ans);
    cout << "[ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << "]";
    }
    cout << " ]\n";

    return 0;
}
