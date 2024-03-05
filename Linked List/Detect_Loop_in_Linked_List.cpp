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

bool DetLoop(Node *head){
    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            return true;
        }

    }
    return false;
}


int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *temp3=new Node(40);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=head;
    int x=DetLoop(head);
    cout<<x<<endl;
    return 0;
}