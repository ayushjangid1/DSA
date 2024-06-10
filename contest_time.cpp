#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int hours = 21;
        int min = 0;

        while(k--){
            min++;
            if(min == 60){
                min = 0;
                hours++;
            }
        }

        cout<<hours<<":";

        if(min<=9){
            cout<<"0";
        }
        cout<<min<<endl;

    }

    return 0;
}