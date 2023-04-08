#include<bits/stdc++.h>
using namespace std;


 void find_combos(int idx,vector<int> &arr,int target, vector<vector<int>> &ans,vector<int> &ans_temp){
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(ans_temp);
            }
            return;
        }

        if(arr[idx]<=target){
            ans_temp.push_back(arr[idx]);
            find_combos(idx,arr,target-arr[idx],ans,ans_temp);
            ans_temp.pop_back();
        }
        find_combos(idx+1,arr,target,ans,ans_temp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ans_temp;
        find_combos(0,candidates,target,ans,ans_temp);
        return ans;
    }

    int main(){
        vector<int> arr={2,3,6,7};
        vector<vector<int>> answer = combinationSum(arr,7);
        for(auto it:answer){
            for(auto itt:it){
                cout<<itt<<" ";
            }
            cout<<endl;
        }
        return 0;
    }