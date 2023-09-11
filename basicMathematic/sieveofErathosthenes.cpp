#include<iostream>
using namespace std;
int main(){
    int a=10;
  
    for(int i=0;i*i<a;i++){
        if(a%i==0){
            cout<<i;
        }
    }
    
}