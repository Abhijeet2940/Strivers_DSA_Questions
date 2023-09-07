#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a=10;
    int b=5;
    
    int d,e,f;
    for(int i=1;i<b;i++){
        for(int j=1;j<a;j++){
            d=min(b*j,b*i);
            e=min(i*a,j*a);
            
            if(d==e){
            f=d;
        }
        }
        
        
    }
    cout<<f;
    return 0;
}