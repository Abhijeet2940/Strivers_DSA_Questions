//naive approach
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=3;
    for(int j=0;j<d;j++){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;

    }}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//Method 2
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int d;
//     cin>>d;
//     if(d>n){
//         d=d%n;
//     }
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         arr[n-d+i]=temp[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
