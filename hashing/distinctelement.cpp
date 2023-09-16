// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[]={10,10,20,20,20,10};
// int b[]={20,10};
// int n=sizeof(arr)/sizeof(arr[0]);
// int c=sizeof(b)/sizeof(b[0]);
// int count=0;
// int i=0;
// int j=0;
// while(i<n && j<c){

//    if(arr[i]==b[j]){
// count++;
// i++;
// j++;
// arr[i+1]!=arr[i] && b[j+1]!=b[j];
//    }else if(arr[i]>b[j]){
//     j++;
//    }else if(arr[i]<b[j]){
//     i++;
//    }

// }
// cout<<count;

// return 0;
// }




#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    int res=0;
    int arr[]={10,10,20,20,20,10};
 int b[]={20,10};
 unordered_set<int >s;
 int n=sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<n;i++){
    s.insert(arr[i]);
 }
 for(int j=0;j<n;j++){
 if(s.find(b[j])!=s.end()){
    res++;
    s.erase(b[j]);
 }
 }
 cout<<res;
return 0;
}