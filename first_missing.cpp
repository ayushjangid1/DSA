#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int cnt[200005];
int main(){
    int n,m,i,j;
    cin>>n>>m;

    for(i = 0;i<n;i++){
        cin>>j;
        j+=m;
        cnt[j]++;
    }
    for(i=0;i<2*m;i++){
        if(!cnt[i]){
            cout<<i-m;
            cout<<endl;
            break;
        }
    }


    return 0;
}