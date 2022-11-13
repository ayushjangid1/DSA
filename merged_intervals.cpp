#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    vector<vector<int>> intervals;
    int i,j;

    for(i = 0;i<n;i++){
        vector<int> v1;
        for(j=0;j<2;j++){
            int vec;
            cin>>vec;
            v1.push_back(vec);
        }
        intervals.push_back(v1);
    }

    vector<vector<int>> mergedintervals;
    sort(intervals.begin(), intervals.end());
    if(intervals.size()==0){
        cout<<"Empty intervals"<<endl;
    }
    vector<int> temp = intervals[0];

    for(auto it:intervals){
        if(it[0]<=temp[1]){
            temp[1] =max(it[1],temp[1]);
        }
        else{
            mergedintervals.push_back(temp);
            temp=it;
        }
    }
    mergedintervals.push_back(temp);

    for(i=0;i<mergedintervals.size();i++){
        for(j=0;j<2;j++){
            cout<<mergedintervals[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}