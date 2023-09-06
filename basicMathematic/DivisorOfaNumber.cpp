#include<iostream>
using namespace std;
int main(){
 //naive solution
 /*   int n=40;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }*/
    
    int n=40;
    
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
           cout<<i<<" ";
        }
    }
}