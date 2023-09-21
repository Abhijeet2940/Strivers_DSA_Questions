// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[]={15,20,5,15};
// int b[]={15,15,15,20,10};
// int n=sizeof(arr)/sizeof(arr[0]);
// int d=sizeof(b)/sizeof(b[0]);
// bool a=true;
// int count=1;
// int temp[d+n];

// for(int i=0;i<n;i++){
//     temp[i]=arr[i];
   
   
// }
// for(int j=0;j<d;j++){
//     temp[n+j]=b[j];
// }
// sort(temp,temp+n+d);
// for(int i=1;i<d+n;i++){
// if(temp[i]!=temp[i-1]){
//     count++;
// }
// }

// cout<<count;
// return 0;
// }

//efficient approach
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
 int arr[]={10,15,12};
 int b[]={18,12};
  int n=sizeof(arr)/sizeof(arr[0]);
 int d=sizeof(b)/sizeof(b[0]);
 unordered_set<int>s;
 for(int i=0;i<n;i++){
    s.insert(arr[i]);
 }
for(int i=0;i<d;i++){
    s.insert(b[i]);

 }
 cout<<s.size();
return 0;
}

