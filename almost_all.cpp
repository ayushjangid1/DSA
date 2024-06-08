#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n)
{

    for (int j = 2; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n,0);
        for(auto &i:arr) cin>>i;
        sort(arr.begin(),arr.end());
        vector<ll> ano_arr;
        ll ori_num = arr[0] * arr[n-1];
        for(ll i=2;i*i<=ori_num;i++){
            if(ori_num%i == 0){
                ano_arr.push_back(i);
                if(i != (ori_num/i)){
                    ano_arr.push_back(ori_num/i);
                }
            }
        }
        sort(ano_arr.begin(),ano_arr.end());
        if(ano_arr == arr){
            cout<<ori_num<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}