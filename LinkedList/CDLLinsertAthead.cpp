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
    node *InsertAtHead(node *head,int x){
    node *temp=new node(10);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
    }
int main(){

return 0;
}