#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *prev;
	Node(int d){
		data=d;
	    next=NULL;
	    prev=NULL;
	    
	}
};

Node *insertatEnd(Node *head,int data){
	Node *temp=new Node(data);
	if(head==NULL){
		return temp;
	}
	Node *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
		
		
	}
	curr->next=temp;
	temp->prev=curr;
	return temp;
}

PrintList(Node *head){
	Node*curr=head;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->next;
		
	}
	
	
}

int main(){
	Node *head=new Node(20);
	Node *temp1=new Node(40);
	Node *temp2=new Node(60);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	cout<<"The Linked List before insertion :"<<endl;
	PrintList(head);
	cout<<"The linked list after insertion is"<<endl;
	
	head=insertatEnd(head,100);
    PrintList(head);
	
return 0;
}










