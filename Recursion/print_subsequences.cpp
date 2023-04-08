#include<bits/stdc++.h>
using namespace std;

int count_sub_sum_k(int i, int s,int sum,int arr[],int n){
    if(i==n){
        if(s==sum) return 1;
        return 0;
    }

    s+=arr[i];

    int l = count_sub_sum_k(i+1,s,sum,arr,n);
    
    s-=arr[i];

    int r = count_sub_sum_k(i+1,s,sum,arr,n);
    return l+r;
}

bool sub_sum_k_only_first(int i,vector<int> &ds, int s,int sum,int arr[],int n){
    if(i==n){
        // condition satisfied return true;
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" ";
            }
        cout<<endl;
        return true;
        }
        //condition not satisfied return false
        return false;
    }
    ds.push_back(arr[i]);
    s+=arr[i];

    //if got ans answer then return 
    if(sub_sum_k_only_first(i+1,ds,s,sum,arr,n) == true){
        return true;
    }
    ds.pop_back();
    s-=arr[i];

    // if got an answer return
    if(sub_sum_k_only_first(i+1,ds,s,sum,arr,n) == true){
        return true;
    }
    //if didn't got an answer return false;
    return false;
}

void sub_sum_k(int i,vector<int> &ds, int s,int sum,int arr[],int n){
    if(i==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" ";
            }
        cout<<endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    sub_sum_k(i+1,ds,s,sum,arr,n);
    ds.pop_back();
    s-=arr[i];
    sub_sum_k(i+1,ds,s,sum,arr,n);

}

void print_sub(int i,int arr[],int n,vector<int> &ds){
    if(i==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}"<<endl;
        }
        cout<<endl;
        return;
    }
    //adding before calling 
    ds.push_back(arr[i]);
    // calling by taking into account the ith index
    print_sub(i+1,arr,n,ds);
    // removing before calling 
    ds.pop_back();
    // calling by taking not into account the ith index
    print_sub(i+1,arr,n,ds);
}


int main(){

    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ds;
    // print_sub(0,arr,n,ds);
    // sub_sum_k(0,ds,0,sum,arr,n);
    // sub_sum_k_only_first(0,ds,0,sum,arr,n);
    cout<<count_sub_sum_k(0,0,sum,arr,n);
    
    return 0;
}