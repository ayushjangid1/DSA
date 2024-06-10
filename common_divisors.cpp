#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int gcd(int a,int b){
    if(a==0){
        return b;
    }

    return gcd(b%a,a);
}

int main(){

    int n;
    cin>>n;
    vector<int> vec(n,0);
    vector<int> freq(1e6+1,0);
    for(auto &i:vec){
        cin>>i;
        freq[i]++;
    }

    bool flag = false;
    for(int i=1e6;i>=0;i--){
        int cnt = 0;
        for(int j=i;j<=1e6;j+=i){
            cnt += freq[j];
            if(cnt>=2){
                cout<<i<<endl;
                flag= true;
                break;
            }
            
        }
        if(flag==true){
            break;
        }
    }



    return 0;
}