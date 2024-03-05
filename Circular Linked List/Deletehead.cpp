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

Node *deletehead(Node *head){

    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete(head);
        return NULL;
    }
   Node *curr=head;
   
    while(curr->next!=head){
        curr=curr->next;
    }
    
    curr->next=head->next;
    delete(head);
    return curr->next;
}


void PrintList(Node *head){
    
    cout<<head->data<<endl;
    Node *curr=head->next;
    while(curr!=head){
        cout<<curr->data<<endl;
        curr=curr->next;

    }
}

int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    head->next=temp1;
    temp1->next=head;
    head=deletehead(head);
    PrintList(head);


    return 0;
}