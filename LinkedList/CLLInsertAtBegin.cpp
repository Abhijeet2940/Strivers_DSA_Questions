//NAIVE WAY
// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node *next;
//     node(int n){
//         data=n;
//         next=NULL;

//     }
// };
// node *insertatBgin(node *head,int n){
// node *temp=new node(n);
//     if(head==NULL){
//         return temp;
//     }
//     else {
//         node *curr=head;
//         while(curr->next != head){
//             curr=curr->next;
//         }
//         curr->next=temp;
//         temp->next=head;
//     }
//     return temp;
// }
// int main(){
// node *head=new node (10);
// head->next=new node (20);
// head->next->next=head;
// return 0;
// }

//efficient Way
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int n){
        data=n;
        next=NULL;
    }
};
node *insertATbegin(node *head,int n){
    node *temp=new node(n);
if(head==NULL){
    return temp;
}
else{
    temp->next=head->next;
    head->next=temp;
    int t=head->data;
    head->data=temp->data;
    temp->data=t;
    return head;

    
}
}
int main(){
node *head=new node(10);
head->next=new node(20);
head->next->next=head;
return 0;
}