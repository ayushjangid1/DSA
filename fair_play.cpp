#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int mx1 = max({a,b,c,d});
        int mx2;
        if(mx1 == a){
            mx2 = max({b,c,d});
        }
        else if(mx1 == b){
            mx2 = max({a,c,d});
        }
        else if(mx1 == c){
            mx2 = max({a,b,d});
        }
        else{
            mx2 = max({a,b,c});
        }
        int w1 = max({a,b});
        int w2 = max({c,d});

        int first,second;
        if(w1>w2){
            first = w1;
            second = w2;
        }
        else{
            first = w2;
            second = w1;
        }
        if(first == mx1 && second == mx2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}