#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,40,50,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }

    }
    cout<<res;
    return 0;}
