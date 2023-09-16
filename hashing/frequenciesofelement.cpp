// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={10,10,30,10,40,50};
// int n=sizeof(arr)/sizeof(arr[0]);
// bool a=false;
// int temp[n];
// for(int i=0;i<n;i++){
//     a=false;
//    for(int j=i+1;j<n;j++){
// if(arr[i]==arr[j]){
//     a=true;
//     break;
// }


//     }
//     if(a==true){
//         continue;}
//         int freq=1;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 freq++;
//                 cout<<arr[i]<<" "<<freq<<endl;
//             }
//         }
    

    
// }


// return 0;
// }

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
      int arr[]={10,10,30,10,40,50};
 int n=sizeof(arr)/sizeof(arr[0]);
unordered_map<int,int>a;
for(int x:arr){
a[x]++;
}
for(auto e:a){
cout<<e.first<<" "<<e.second<<endl;
}
return 0;
}