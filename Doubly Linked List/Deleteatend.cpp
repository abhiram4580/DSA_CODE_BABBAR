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

Node *deleteend(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return NULL;
    }
    Node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;


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
    head=deleteend(head);
    head=deleteend(head);
    PrintList(head);
    return 0;
}
