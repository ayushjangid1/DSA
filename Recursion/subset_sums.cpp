#include <bits/stdc++.h>
using namespace std;

void find_subSum(int idx, int sum, vector<int> arr, int N, vector<int> &sums)
{
    if (idx == N)
    {
        sums.push_back(sum);
        return;
    }

    find_subSum(idx + 1, sum + arr[idx], arr, N, sums);
    find_subSum(idx + 1, sum, arr, N, sums);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> sums;
    find_subSum(0, 0, arr, N, sums);
    sort(sums.begin(), sums.end());
    return sums;
}

int main()
{
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = subsetSums(arr, N);
    sort(ans.begin(), ans.end());
    for (auto sum : ans)
    {
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}