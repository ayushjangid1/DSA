#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

bool ask(int x,int y){
    cout<<"? "<<x<<" "<<y<<endl;
    string s;
    cin>>s;
    return (s == "YES");
}

int main(){

    int side,height,base;
    int l = 1,r = 1000;
    int half_side;
    while(l<=r){
        int mid = (l+r)/2;
        if(ask(mid,0)){
            half_side = mid;
            l = mid + 1;
        }
        else{
            r= mid - 1;
        }
    }
    side = 2 * half_side;
    l = half_side,r =1000;
    int half_base;
    while(l<= r){
        int mid = (l+r)/2;
        if(ask(mid,side)){
            half_base = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    base = 2 * half_base;
    l = side,r = 1000;
    while(l <= r){
        int mid = (l+r)/2;
        if(ask(0,mid)){
            height = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    height -= side;
    int ans = (side * side) + (base * height)/2;
    cout<<"! "<<ans<<endl;

    return 0;
}