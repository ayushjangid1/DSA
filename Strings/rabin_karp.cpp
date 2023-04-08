#include<bits/stdc++.h>
using namespace std;
#define d 256
void rabin_karp(string pat, string txt, int q){
    int m = pat.size();
    int n = txt.size();
    int i,j;
    int p = 0;
    int t = 0;
    int h = 1;
    for(i = 0;i<m-1;i++){
        h = (h * d) % q;
    }
    for(i = 0;i<m;i++){
        p = (d*p + pat[i]) % q;
        t = (d*t + txt[i]) % q;
    }

    for(i = 0;i<n-m;i++){

        if(p == t){
            for(j=0;j<m;j++){
                if(txt[i+j]!=pat[j]){
                    break;
                }
            }
            if(j==m){
                cout<<"Pattern found at : "<<i<<"th index"<<endl;
            }
        }
        if(i<n-m){
            t = (d * (t - txt[i] * h) + txt[i+m])%q;
        }
        if(t<0){
            t=t+q;
        }
    }
}

int main(){

    string txt,pat;
    cin>>txt>>pat;
    int q= INT_MAX;
    rabin_karp(pat,txt,q);


    return 0;
}