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

Node *Merge(Node *head1,Node *head2)
   {  
    
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node *head=NULL;
    Node *tail=NULL;
    if(head1->data<=head2->data){
        head=tail=head1;
        head1=head1->next;
    }
    else{
        head=tail=head2;
        head2=head2->next;
    }
    while(head1!=NULL && head2!=NULL){
        if(head1->data<=head2->data){
            tail->next=head1;
            tail=head1;
            head1=head1->next;
        }
        else{
            tail->next=head2;
            tail=head2;
            head2=head2->next;
        } 
        
    }
        if(head1==NULL){
            tail->next=head2;
        }
        else{
            tail->next=head1;
        }
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
    Node *head1=new Node(5);
    Node *head2=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head1->next=temp1;
    head2->next=temp2;
    cout<<"Before Merging"<<endl;
    PrintList(head1);
    cout<<endl;
    PrintList(head2);
    cout<<endl;
    Node *head=Merge(head1,head2);
    cout<<"After Mergeing"<<endl;
    PrintList(head);
    return 0;
}

