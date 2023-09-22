#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
    node(int x){
        data=x;
        next=prev=NULL;
    }
};
node *insertAtend(node *head,int x){
   node *temp=new node(x);
  if(head==NULL){
    temp->next=temp;
    temp->prev=temp;
    return temp;
  }
  temp->prev=head->prev;
  temp->next=head;
  head->prev->next=temp;
  head->prev=temp;
  return head;

}
int main(){
node *b=new node(10);
node  *temp=new node(20);
  

  b->next=temp;
  temp->prev=b;
  temp->next=b;
  b->prev=temp;

return 0;
}