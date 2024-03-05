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

Node *insertbegin(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{

    
    Node *curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    
    curr->next=temp;
    temp->next=head;
    return  head;
}
}


void PrintList(Node *head){
    Node *curr=head->next;
    cout<<head->data<<endl;
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
    head=insertbegin(head,50);
    PrintList(head);


    return 0;
}