#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        long long hc,dc;
        cin>>hc>>dc;
        long long hm,dm;
        cin>>hm>>dm;
        long long k,w,a;
        cin>>k>>w>>a;
        
        bool flag = 0;
        for(int i=0;i<=k;i++){
            long long h = hc + (a*i);
            long long d = dc + (w*(k-i));

            long long kill_monster = (hm + d -1)/d;
            long long kill_char = (h + dm -1)/dm;

            if(kill_monster <= kill_char){
                flag = true;
                break;
            }        
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
