#include<iostream>
using namespace std;
//normal approach
/*int main(){
  int n=5;
  int fact=1;
  for(int i=1;i<=n;i++)  {
    fact=fact*i;
  }
  cout<<fact;
}*/
int factorial(int n){
    int b=1;
    if(n>1){
        b=n*factorial(n-1);
  return b; 
   }
}
int main(){
    int n=5;
    int b=factorial(n);
    cout<<b ;
    return 0;
}