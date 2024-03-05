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

Node *delHead(Node *head){
	if(head==NULL){
		return NULL;
	}
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	else{
		Node *temp=head;
		head=head->next;
		head->prev=NULL;
		delete temp;
		return head;
	}
	
}
Node *insertBegin(Node *head,int data){
	Node *temp=new Node(data);
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
    Node *head=NULL;
    head=insertBegin(head,100);
    head=insertBegin(head,200);
    head=insertBegin(head,300);
    
    
	cout<<"Befor deletion of the head of Doubly Linked List"<<endl;
	PrintList(head);
	cout<<"After deletion of the head of the Doubly Linked List"<<endl;
	delHead(head);
	PrintList(head);
	
return 0;
}





















