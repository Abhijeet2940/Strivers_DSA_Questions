#include<iostream>
using namespace std;
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    return a,b;
}

int main(){
    int arr[]={10,20,50,60,50,77,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
for(int i=0;i<n;i++){
    while(low<high){
   int temp=arr[low];
   arr[low]=arr[high];
   arr[high]=temp;
    low++;
    high--; }
    cout<<arr[i]<<" ";
   
}

return 0;

}