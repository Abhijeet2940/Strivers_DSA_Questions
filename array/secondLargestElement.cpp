#include<iostream>
using namespace std;
int main(){
    int arr[]={28, 43 ,26 ,65 ,60, 54, 51 ,35 ,42, 48 ,33, 40 ,58, 38 ,64, 47 ,44 ,49 ,46 ,25, 57, 39, 55 ,45, 29 ,32, 61 ,53 ,31 ,36, 56 ,63, 30 ,52, 27 ,34 ,50 ,41 ,37, 66 ,62,59};
    int n=sizeof(arr)/sizeof(arr[0]);
    int first=arr[0];
    int second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
            
        }

        else if(arr[i]<first&&arr[i]>second){
            second=arr[i];
        }
    }
    cout<<first<<" "<<second;
}