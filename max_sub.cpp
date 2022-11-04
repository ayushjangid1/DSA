#include <iostream>
#include<climits>

using namespace std;

int main()
{

    // brute force
    //  int n;cin>>n;
    //  int arr[n];
    //  for(int i=0;i<n;i++){
    //      cin>>arr[i];
    //  }

    // int maxsum = INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum =0;
    //         for(int k=i;k<=j;k++){
    //             sum+=arr[k];
    //         }
    //         maxsum = max(sum,maxsum);
    //     }
    // }
    // cout<<maxsum<<endl;

    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int currsum[n + 1];
    // currsum[0] = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     currsum[i] = currsum[i - 1] + arr[i - 1];
    // }
    // int maxsum = INT_MIN;
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = currsum[i] - currsum[j];
    //         maxsum = max(sum, maxsum);
    //     }
    // }
    // cout << maxsum << endl;


    //kadane's algo
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxsum = INT_MIN;

    int currsum = 0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum = max(currsum,maxsum);
    }
    cout<<maxsum<<endl;
    return 0;
}