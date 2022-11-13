#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int area,max_area=INT_MIN,low=0,high=n-1;
    while(low<high){
        area=min(arr[low],arr[high])*(high-low);
        max_area=max(area,max_area);
        if(low<=high){
            low++;
        }
        else{
            high--;
        }
    }
    cout<<max_area<<endl;

    return 0;
}