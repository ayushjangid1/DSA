#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)cin>>arr[i];

    vector<int> pref_sum(n);
    pref_sum[0] = arr[0];
    for(int i=1;i<n;i++){
        pref_sum[i] = pref_sum[i-1] + arr[i];
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(l!=0)
            cout<<pref_sum[r]-pref_sum[l-1]<<endl;
        else
            cout<<pref_sum[r]<<endl;
    }

    return 0;
}