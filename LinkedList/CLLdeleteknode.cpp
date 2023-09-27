#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *deletekthnode(node *head,int k){
  if(k==0){
    return NULL;
  }
  if(k==1){
    delete head;
    return NULL;
  }
  else{
    node *curr=head;
    for(int i=1;i<=k-2;i++){
   curr=curr->next;
    }
    node *temp=curr->next;
    curr->next=curr->next->next;

    delete temp;
    return head; 

  }
}
int main(){

return 0;
}