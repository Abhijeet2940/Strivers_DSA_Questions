#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int cap,pos,x;
    cin>>x>>pos;
    int idx=pos-1;
    if(cap==n){
        return n;
    }
    else {
        for(int i=n;i>=idx;i--){
            arr[i+1]=arr[i];
            arr[idx]=x;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
return 0;
}

