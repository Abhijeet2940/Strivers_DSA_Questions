#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *next;
    node *prev;
    node (int n){
        int data=n;
        next=prev=NULL;
    }
};
node *deleteATbeginning(node *head,int n){
    ;
if(head==NULL ){
    return NULL;
}
if(head->next==NULL){
    delete head;
    return NULL;
}else {
node *curr=head;
head=head->next;
head->prev=NULL;
delete curr;
return head;
}
    }
int main(){
node *head=new node(10);
node *temp=new node(20);
node *temp3=new node(30);

head->next=temp;
temp->prev=head;
temp->next=temp3;
temp3->prev=temp;

return 0;
}