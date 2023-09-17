#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[]={0,1,1,1,1,0};
     int arr2[]={1,0,1,1,1,0};
 int n=sizeof(arr)/sizeof(arr[0]);
 int b=sizeof(arr2)/sizeof(arr2[0]);
 int res=0;
for(int i=0;i<n;i++){
int x=0;
 int y=0;
    for(int j=0;j<n;j++){
x=x+arr[j];
y=y+arr2[j];
if(x==y){
    res=max(res,j-i+1);
}
    }
    
}
cout<<res;
return 0;
}