#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *prev;
	Node (int x){
		data=x;
		prev=NULL;
		next=NULL;
		
	}
  
};

Node *delLast(Node *head){
	if(head==NULL){
		return NULL;
	}
	if(head->next=NULL){
		delete head;
	}
	
	else{
		Node *curr=head;
		while(curr->next->next!=NULL){
			curr=curr->next;
		}
	    Node *temp=curr->next;
	    curr->next=NULL;
	    delete temp;
		return head;
	}
	
	
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
	Node *temp1=new Node(11);
	Node *temp2=new Node(12);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
    cout<<"Before deletion of the Last Node of the Doubly Linked List:"<<endl;
    PrintList(head);
    cout<<"After deletion of the Last Node"<<endl;
    delLast(head);
    PrintList(head);
    
    return 0;
}















