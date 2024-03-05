#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *next;
    int data;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *PairwiseSwap(Node *head){
    if(head==NULL || head->next==NULL){
            return NULL;
        }
        Node *curr=head->next->next;
        Node *prev=head;
        head=head->next;
        head->next=prev;

        while(curr!=NULL && curr->next!=NULL){
            prev->next=curr->next;
            prev=curr;
            Node *next=curr->next->next;
            curr->next->next=curr;
            curr=next;
            
        }
        prev->next=curr;
        return head;
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
    temp1->next=temp2;
    temp2->next=temp3;
    cout<<"Before Pairwise Swapping We get"<<endl;
    PrintList(head);
    cout<<endl;
    cout<<"After Pairwise Swapping we get"<<endl;
    head=PairwiseSwap(head);
    PrintList(head);

    return 0;
}