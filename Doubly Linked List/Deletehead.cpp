#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;

    }
};

Node *deleteatbegin(Node *head){
    
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    Node *temp=head;
    head=head->next;
    head->prev=NULL;
    delete(temp);

    return head;
    
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
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=deleteatbegin(head);

    PrintList(head);
   
    return 0;
}