#include<bits/stdc++.h>
using namespace std;
int main(){
    int c=4;
    int b=1;
    int count=0;
     while(b<=c){
        if(b&c==1){
            count++;
        }
    b<<1;
}
cout<<count;
return 0;
}