#include<iostream>
#include<cmath>
using namespace std;
//naive solution
/*int main(){
    int a=10 ,b=15;
    int j=min(a,b);
    while(j>0){
        if(a%j==0&&b%j==0){
            break;
        }
        j--;
    }
    cout<<j;
    return 0;
}*/
int main(){
    //eucledian algorithm
    int a=14,b=21;
    while(a!=b){
        if(a>b){
            a=a-b;
        }else
        b=b-a;
    }
    cout<<a;
}