// #include<bits/stdc++.h>
// using namespace std;
// bool ab(int arr[],int n,int target){

//     for(int i=0;i<n;i++){
//         int sum =0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//         if(arr[j]==target){
//             return true;
//         }
//         if(sum==target){
//             return true;
//         }}
//     }
//     return false;
// }
// int main(){
// int arr[]={10,50,-30,04};
//  int n=sizeof(arr)/sizeof(arr[0]);
//  int target=30;
//  bool a = ab(arr,n,target);
//  cout<<boolalpha<<a;
// return 0;
// }


#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
bool ab(int  arr[],int n,int target){
    unordered_set<int>a;
    int sum=0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
    a.insert(sum);
    if(sum==target){
        return true;
    }
    if(a.find(sum-target)!=a.end()){
        return true;
    }
 }
 return false;
}
int main(){
    
    int arr[]={100,-30,04};
 int n=sizeof(arr)/sizeof(arr[0]);
 int target=30;
 
 bool a=ab(arr,n,target);
 cout<<boolalpha<<a;

return 0;
}