#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    bool flag = true;
    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
    {
        while (isalnum(s[i]) == false && i < j)
            i++;
        while (isalnum(s[j]) == false && i < j)
            j--;

        if(tolower(s[i])!=tolower(s[j]))
            flag = false;
    }
    if(flag==true){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}