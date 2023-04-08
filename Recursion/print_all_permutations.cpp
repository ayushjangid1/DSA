#include<bits/stdc++.h>
using namespace std;

void permutations(vector<int> &ds,vector<int> & nums,vector<vector<int>> &ans,vector<int> &freq){
    if(nums.size() == ds.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i] = 1;
            permutations(ds,nums,ans,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int> & nums){
    vector<vector<int>> ans;
    vector<int> ds;
    vector<int> freq(nums.size(),0);
    permutations(ds,nums,ans,freq);
    return ans;
}

int main(){

    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>> answer = permute(nums);
    for(auto it :answer){
        for(auto itt:it){
            cout<<itt<<" ";
        }
        cout<<endl;
    }
    return 0;
}