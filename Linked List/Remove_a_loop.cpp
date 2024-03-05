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

void RemoveLoop(Node *head){
    if(head==NULL){
        return ;
    }
    if(head->next==head){
        head->next=NULL;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }
        if(slow!=fast){
            return;
        }
        slow=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
        return ;
    
}

    void Print(Node *head){
        Node *curr=head;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
    }

    int main(){
        Node *head=new Node(20);
        Node *temp1=new Node(30);
        Node *temp2=new Node(40);
        Node *temp3=new Node(50);
        head->next=temp1;
        temp1->next=temp2;
        temp2->next=temp3;
        temp2->next=temp1;
        cout<<"Before Removing the Loop"<<endl;
        Print(head);
    }
    
