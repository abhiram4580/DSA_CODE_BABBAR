#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
     int data;
     Node *next;
     Node(int x){
        data=x;
        next=NULL;
     }

};

Node *ReverseKNodes(Node *head,int k){
    if(head==NULL || k==1){
        return head;
    }
    Node *dummy=new Node(0);
    dummy->next=head;
    Node *curr=head;
    Node *prev=dummy;
    Node *nex=dummy;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
 }
   while(count>=k){
     curr=dummy->next;
     nex=curr->next;
     for(int i=1;i<k;i++){
        curr->next=nex->next;
        nex->next=prev->next;
        prev->next=nex;
        nex=curr->next;
     }
     prev=curr;y
     count=count-k;
     

   }
   return dummy->next;

}
void PrintList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}

int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *temp3=new Node(40);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    int k=2;
    cout<<"Before Reversing"<<endl;
    PrintList(head);
    cout<<"After Reversing"<<endl;
    ReverseKNodes(head,2);
    PrintList(head);
    return 0;
    
}