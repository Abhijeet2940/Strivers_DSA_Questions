//naive approach
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[]={10,10,30};
// int n=sizeof(arr)/sizeof(arr[0]);
// bool a=false;
// int res=0;
// for(int i=0;i<n;i++){
//     a=false;
// for(int j=0;j<i;j++){
// if(arr[i]==arr[j]){
// a=true;
// }
// }
// if(a==false){
//     res++;
// }
// }
// cout<<res;
// return 0;
// }


//better approach
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[]={10,10,30};
// int n=sizeof(arr)/sizeof(arr[0]);
// int count =1;//arr[0]ka count
// sort(arr,arr+n);
// for(int i=1;i<n;i++){
//     if(arr[i]!=arr[i-1]){
//         count++;
//     }
    
// }
// cout<<count<<" ";
// return 0;
// }

//efficient approach
// #include<bits/stdc++.h>
// #include<unordered_set>
// using namespace std;
// int main(){
// unordered_set<int>s; 
//    int arr[]={10,10,30};
// int n=sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<n;i++){
// s.insert(arr[i]);
// }
// cout<<s.size();
// return 0;
// }

//improved efficient approach
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    int arr[]={10,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_set<int>s(arr,arr+n);
    cout<<s.size();

return 0;
}