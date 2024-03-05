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

Node *Insert(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    return temp;
}










void PrintList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}

int main(){
    Node *head=new Node(20);
    Node *temp1=new Node(30);
    Node *temp2=new Node(40);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;

     PrintList(head);
    cout<<"After Insertion at the beginning we get"<<endl;
    head=Insert(head,23);
    PrintList(head);
    

       
    return 0;
}