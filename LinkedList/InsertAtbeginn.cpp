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
node *insertbegin(node *head,int n){
    node * temp=new node(n);
    temp -> next =head;
    return temp;
}
void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
int main(){
node *head=NULL;
head=insertbegin(head,30);
head=insertbegin(head,20);
head=insertbegin(head,10);
printlist(head);
return 0;
}