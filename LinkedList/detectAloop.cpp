#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *next;
    bool visited;
    node(int x){
        data=x;
        next=NULL;
         visited=false;
    }
};
bool detectAloop(node *head){
    node *curr=head;

    while(curr!=NULL){
     if(curr->visited==false){
        curr->visited==true;
     }
     if(curr->visited==true){
return true;
     }
     else 
     return false;

     curr=curr->next;
    }
}
int main(){

return 0;
}