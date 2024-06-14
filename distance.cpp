#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n1,n2,d;
        cin>>n1>>n2>>d;
        vector<int> arr1(n1,0);
        vector<int> arr2(n2,0);
        for(int i=0;i<n1;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>arr2[i];
        }

        int ans = 0;

        for(int i=0;i<n1;i++){
            bool flag= false;
            for(int j=0;j<n2;j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}