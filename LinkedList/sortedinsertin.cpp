#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *insertTheEelment(node *head,int x){
          node *temp=new node(x);
          if(head==NULL){
            return temp;
          }
          else{
            node *curr=head;
            while(curr->next->data < temp->data){
                curr=curr->next;
            }
            
            curr->next=temp->next;
            curr->next=temp;
            return head;



          }
}
int main(){

return 0;
}