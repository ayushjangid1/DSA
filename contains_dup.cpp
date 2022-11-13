#include<bits/stdc++.h>
using namespace std;

#define N 10000

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    map<int,int> mp;
    for(auto i:arr){
        mp[i]++;
    }
bool flag = false;
    for(auto i:mp){
        if(i.second>=2){
            flag = true;
            cout<<"True"<<endl;
            break;
        }
    }
if(!flag){
    cout<<"False"<<endl;
}
    
    return 0;
}