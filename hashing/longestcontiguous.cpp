// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[]={8,20,7,30};
// int n=sizeof(arr)/sizeof(arr[0]);
// sort(arr,arr+n);
// int res=0;
// int count=1;
// for(int i=1;i<n-1;i++){
// if(arr[i]-arr[i-1]==1){
// count++;
// }
// else{
//     count=1;
// }
// res=max(res,count);
// }
// cout<<res;
// return 0;
// }


#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> a;
    int arr[]={8,20,7,30};
 int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        a.insert(arr[i]);
    }
for(int x:arr){
   
}
return 0;
}