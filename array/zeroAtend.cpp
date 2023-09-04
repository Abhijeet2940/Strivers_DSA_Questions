//naive approach
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,0,30,0,20,0,04,0,45,60};
//     int n=sizeof(arr)/sizeof(arr[0]);
    
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++)
//         if(arr[j]==0){
//             int temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//         cout<<arr[i]<<" ";

//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,0,5,0,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}