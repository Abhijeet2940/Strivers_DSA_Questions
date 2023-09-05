#include<iostream>
using namespace std;
int main(){
    int n=1;
//naive solution
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"non-prime";
            return 0;
        }
        

    }
    
        cout<<"prime";

    return 0;
}