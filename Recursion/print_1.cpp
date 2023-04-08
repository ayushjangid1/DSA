#include<iostream>
using namespace std;
int count = 0;

void print(int count){
    if(count==5)
        return;
    cout<<count<<endl;
    count++;
    print(count);
}

int main(){

    print(count);
    return 0;
}