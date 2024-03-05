#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        next=NULL;
        data=x;
    }

};

Node *reverseKNode(Node *head,int k){
    Node *curr=head;
    Node*prev=NULL;
    Node *next=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        Node *rest_head=reverseKNode(next,k);
        head->next=rest_head;


    }
    return prev;
}

void PrintList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;

}

int main(){
    Node *head=new Node(20);
    Node *temp1=new Node(30);
    Node *temp2=new Node(40);
    Node *temp3=new Node(50);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    cout<<"Before Reversing"<<endl;
    PrintList(head);
    Node *temp=reverseKNode(head,2);
    cout<<"After Reversing"<<endl;
    PrintList(temp);
    return 0;
}