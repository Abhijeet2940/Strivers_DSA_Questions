#include<iostream>
using namespace std;
int maxi(int arr[],int n){
   int max=0;
   int count;
   for(int i=0;i<n;i++){
      
      if(arr[i]>max){
         max=arr[i];
count=i;
                }}
                 return count; 
}
      
         
int main(){

int arr[]={20,65,87,56,45};
int n = sizeof(arr)/sizeof(arr[0]);
int b=maxi(arr,n);
cout<<b;

    
return 0;
}

