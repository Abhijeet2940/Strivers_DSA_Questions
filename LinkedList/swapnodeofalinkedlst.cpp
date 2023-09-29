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
node *swapTwoNumber(node *head){
    node *curr=head;
    int count=1;
    while(curr!=NULL){
    count++;
    if(count%2!=0){
     int temp=curr->data;
     curr->data=curr->next->data;
     curr->next->data=temp;
     if(curr->next!=NULL){
        return Nu
     }
    }

        curr=curr->next;
    }
}
int main(){

return 0;
}