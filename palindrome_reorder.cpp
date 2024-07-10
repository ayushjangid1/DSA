#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> arr(26,0);
        for(auto c:s)
            arr[(c-'A')]++;

        if(s.length()%2 == 0){
            int flag = 1;
            for(auto i:arr){
                flag &= (i%2 == 0);
            }
            if(!flag){
                return cout<<"NO Solution\n", 0;
            }
            string ans = "";
            for(int i=0;i<26;i++){
                int x = arr[i]/2;
                while(x--){
                    ans += ((char)('A' + i));
                }
            }
            cout<<ans;
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;
        }
        else{
            int flag = 0;
            char ch = '#';
            int ind = 0;
            for(auto i:arr){
                flag += (i%2 == 1);
                if(i%2 == 1){
                    ch = ((char) ('A' + ind));
                }
                ind++;
            }

            if(flag != 1){
                return cout<<"NO Solution\n", 0;
            }
            string ans = "";
            for(int i=0;i<26;i++){
                int x = arr[i]/2;
                while(x--){
                    ans += ((char)('A' + i));
                }
            }
            cout<<ans<<ch;
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;
        }
    }


    return 0;
}