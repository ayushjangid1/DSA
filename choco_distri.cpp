#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(m==0 || n==0){
        cout<<"Edge case"<<endl;
    }

    if(n<m){
        cout<<"Not possible"<<endl;
    }
    sort(arr, arr + n);
    int min_diff = INT_MAX;
    int st = 0, en = m - 1;
    for (int i = 0; i < n; i++)
    {
        int diff = abs(arr[st + i] - arr[en + i]);
        min_diff = min(min_diff, diff);
    }
    cout << min_diff << endl;

    return 0;
}