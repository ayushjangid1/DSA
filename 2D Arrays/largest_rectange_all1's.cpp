#include<bits/stdc++.h>
using namespace std;

    int largest_rectangle(vector<int> heights){

    int n= heights.size();
    stack<int> st;
    int left_small[n],right_small[n],max_area=0;
    for(int i=0;i<n;i++){
        while(!st.empty() && heights[st.top()] >= heights[i])
            st.pop();
        if(st.empty())
            left_small[i] = 0;
        else   
            left_small[i] = st.top() + 1;
        st.push(i);
    }
    while(!st.empty())st.pop();
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && heights[st.top()] >= heights[i])
            st.pop();
        if(st.empty())
            right_small[i] = n-1;
        else   
            right_small[i] = st.top() - 1;
        st.push(i);
    }
    for(int i=0;i<n;i++){
        max_area=max(max_area,(heights[i] * (right_small[i]-left_small[i]+1)));
    }
    return max_area;
}

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int max_area = 0;
        vector<int> heights(m, 0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == '1'){
                    heights[j]++;
                }
                else{
                    heights[j]=0;
                }
            }
            int area = largest_rectangle(heights);
            max_area = max(max_area, area);
        }
        return max_area;
    }

int main(){

    vector<vector<char>> mat = {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    int max_area = maximalRectangle(mat);
    cout<<max_area;

    return 0;
}