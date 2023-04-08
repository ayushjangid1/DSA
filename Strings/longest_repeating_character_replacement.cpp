#include<bits/stdc++.h>
using namespace std;

int longest_substr_with_replacement(string s,int k){
    int n=s.size();
    int ans= 0;
    vector<int> freq(26,0);
    int start = 0;
    int maxFreq = 0;

    //feasible
    // for(int end=0;end<n;end++){
    //     freq[s[end] - 'A']++;
    //     if(maxFreq<freq[s[end]-'A']){
    //         maxFreq = freq[s[end]-'A'];
    //     }
    //     while(end-start-maxFreq+1>k){
    //         freq[s[start]-'A']--;
    //         start++;
    //         for(int i=0;i<26;i++){
    //             if(maxFreq<freq[i]){
    //                 maxFreq=freq[i];
    //             }
    //         }
    //     }
    //     ans=max(ans,end-start+1);
    // }


    //optimal
    for(int end=0;end<n;end++){
        freq[s[end]-'A']++;
        maxFreq=max(maxFreq,freq[s[end]-'A']);
        if(end-start-maxFreq+1>k){
            freq[s[start]-'A']--;
            start++;
        }
        ans=end-start+1;
    }
    return ans;
}

int main(){

    string s;
    int k;
    cin>>k;
    cin>>s;
    cout<<longest_substr_with_replacement(s,k);

    return 0;
}