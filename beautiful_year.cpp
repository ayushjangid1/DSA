#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int year;
        cin>>year;
        year++;
        while(year <= 9000){
            int arr[10] = {0};
            int temp_year = year;
            while(temp_year){
                int last_digit = temp_year%10;
                arr[last_digit]++;
                temp_year/=10;
            }
            bool flag = true;
            for(int i=0;i<10;i++){
                if(arr[i] >1){
                    flag = false;
                }
            }
            if(flag){
                cout<<year<<endl;
                break;
            }
            year++;
        }

    }

    return 0;
}