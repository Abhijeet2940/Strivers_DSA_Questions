// #include<bits/stdc++.h>
// using namespace std;
// bool paira(int arr[],int n,int sum){
// int res=0;
// bool b=false;
//     for(int i=1;i<n;i++){
// if(arr[res]+arr[i]==sum){
// return true;

// }else
// res++;



// }
// return false;

// }
// int main(){
// int arr[]={3,2,5,18,-8};
// int n=sizeof(arr)/sizeof(arr[0]);

// int sum=21;
// bool a = paira(arr,n,sum);
// cout<<a;
// return 0;
// }



// #include<bits/stdc++.h>
// #include<unordered_set>

// using namespace std;
// int main(){
//     int arr[]={11,5,6};
// int n=sizeof(arr)/sizeof(arr[0]);
// int sum=10;
// int b;
// unordered_set<int>a;
// for(int i=0;i<n;i++){
    
//  if(a.find(sum-arr[i])!=a.end()){
//         cout<<arr[i];
//         break;
//  }   
//  cout<<"not found";
//  a.insert(arr[i]);



    
// }

// return 0;
// }


//better solution
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int arr[]={3,2,8,15,-8};
//  int n=sizeof(arr)/sizeof(arr[0]);
//  int sum=17;
//  bool a=false;
//  sort(arr,arr+n);
//  int low=0;
//  int high=n-1;

//  while(low<=high){
//     int b=arr[low]+arr[high];
//     if(b==sum){
//         a=true;
//         break;
//     }else if(b>sum){
//         high--;
//     }else if (b<sum)
//     low++;
//  }
//  if(a){
//     cout<<"found";
//  }else 
//  cout<<"not found";
 
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_set<int>a;
  int arr[]={5,8,-3,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  int sum=3;
  bool c=false;
for(int i=0;i<n;i++){
a.insert(arr[i]);
if(a.find(sum-arr[i])!=a.end()){
   cout<<"found";
   c=true;
    break;
}
}
if(c==false){
    cout<<"not found";
}

return 0;
}
