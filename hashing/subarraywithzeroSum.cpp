// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// bool find(int arr[],int n){
// for(int i=0;i<n;i++){
//     int cur_sum=0;
//  for(int j=i;j<n;j++){
// cur_sum+=arr[j];
// if(cur_sum==0){
//     return true;
// }
//  }}
//  return false;
// }
// int main(){
// int arr[]={10,20,30,04};
// int n=sizeof(arr)/sizeof(arr[0]);
// bool a=find(arr,n);

// cout<<boolalpha<<a;
// return 0;
// }

#include<bits/stdc++.h>
#include<iomanip>
#include<unordered_set>
using namespace std;
bool a(int arr[],int n){
unordered_set<int>a;
 int sum=0;
 for(int i=0;i<n;i++){
    sum=sum+arr[i];
    
    if(a.find(sum)!=a.end()){
        return true;
    }
    if(sum==0){
        return true;
    }
    a.insert(sum);
 }
 return false;

}
int main(){
    int arr[]={10,20,-30,04};
 int n=sizeof(arr)/sizeof(arr[0]);
 bool b=a(arr,n);
 cout<< boolalpha <<b;
return 0;
}