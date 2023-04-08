#include<iostream>
using namespace std;

void print_1_to_n(int i,int n){
    if(i>n)
        return;
    cout<<i<<" ";
    print_1_to_n(i+1,n);
}

void print_n_to_1(int n){
    if(n<1){
        return;
    }
    cout<<n<<" ";
    print_n_to_1(n-1);
}

void print_1toN_backtrack(int i,int n){
    if(i<1){
        return;
    }
    print_1toN_backtrack(i-1,n);
    cout<<i<<" ";
}

void print_Nto1_backtrack(int i,int n){
    if(i>n){
        return;
    }
    print_Nto1_backtrack(i+1,n);
    cout<<i<<" ";
}


//parameterised
void sum_n(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    sum_n(i-1,sum+i);
}

//functional
int sum_n_fun(int n){
    if(n==0){
        return 0;
    }
    return n+sum_n_fun(n-1);
}

int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}

void fact_parameterised(int n,int ans){
    if(n<1){
        cout<<ans<<endl;
        return;
    }
    ans*=n;
    fact_parameterised(n-1,ans);
}

int main(){
    int n;
    cin>>n;
    // print_1_to_n(1,n);
    // print_n_to_1(n);
    // print_1toN_backtrack(n,n);
    // print_Nto1_backtrack(1,n);
    // sum_n(n,0);
    // cout<<sum_n_fun(n);
    // cout<<fact(n);
    fact_parameterised(n,1);

    return 0;
}