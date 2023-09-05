#include<iostream>
using namespace std;
//naive approach
int main(){
    int a;
    cin>>a;
    int count=0;
    while(a>0){
        a=a/10;
        count++;
    }
    cout<<count;
}
    