#include<iostream>
using namespace std;
int main(){
    int n=5;
    int fact=1;
    int a;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    while(fact>0)
if(fact%10==0){
    a=fact/10;
    
}
cout<<a;
}