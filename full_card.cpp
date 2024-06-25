#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        vector<int> freq(14,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        bool flag = false;
        for(int x=0;x<14;x++){
            for(int y=0;y<14;y++){
                if(freq[x] == 3 and freq[y] == 2){
                    cout<<"Yes"<<endl;
                    flag= true;
                }
            }
        }
        if(flag == false){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}