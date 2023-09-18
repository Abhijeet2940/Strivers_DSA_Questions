// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={0,0,1,1,1,1,0};
//  int n=sizeof(arr)/sizeof(arr[0]);

// int a=0;
// int res=0;
// for(int i=0;i<n;i++){
//     int count=0;
// int sum=0;
//     if(arr[i]==0){
//         count++;
//     } if(arr[i]==1){
//         sum++;
//     }
   
// for(int j=i+1;j<n;j++){
//     if(arr[j]==0){
//         count++;
//     }if(arr[j]==1){
//         sum++;
//     }

//     if(count==sum){
//         a=j-i+1;
//     }
//     res=max(a,res);

// }
// }
// cout<<res<<" ";
// return 0;
// }



#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
unordered_map<int ,int > a; 
int main(){
int arr[]={0,0,1,1,1,1,0,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  int pre_sum=0;
 int  target=0;
  for(int i=0;i<n;i++){
if(arr[i]==0){
    arr[i]=-1;
}
  }
  for(int i=0;i<n;i++){
    int pre_sum =pre_sum + arr[i];
    a.insert(pre_sum,i);
if(a.find(target)!=a.end()){
    
}
  }
return 0;
}