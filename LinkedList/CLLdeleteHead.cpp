// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node *next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// node *deletehead(node *head){
    
//     if(head==NULL){
//         return NULL;

//     }
//     if(head->next==head){
//         delete head;
//         return NULL; 
//     }
//     else{
//         node *curr=head;
//         while(curr->next!=head){
//             curr=curr->next;
//     }
//     head->next=curr->next;
    
//     delete head;
//     return curr->next;
//     }
// }
// int main(){
// node *head=new node(2);
// head->next=new node(3);
// head->next->next=head;

// return 0;
// }
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
node *deleteatbegin(node *head){
    if(head==NULL){
        return NULL;
    } if(head->next ==head){
        delete head;
        return  NULL;
    }
    else {
        head->data=head->next->data;
        node *temp=head->next;
   head->next=head->next->next;
   delete temp;
   return head;
    }
}
int main(){
node *head=new node(10);
head->next=new node(20);
head->next->next=head;
return 0;
}