#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *next;
    Node *prev;
    int data;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

Node *reverseDLL(Node *head){
    Node *curr=head;
    while(curr->next!=NULL){
        Node *temp=curr->next;
        curr->next=curr->prev;
        curr->prev=temp;
        curr=temp;
    }
    return curr;
}

void PrintList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

}

int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *temp3=new Node(40);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
    cout<<"Before Reversing";
    PrintList(head);
    cout<<endl;
    cout<<"Afeter Reversing"<<" ";
    head=reverseDLL(head);
    PrintList(head);
    return 0;
}