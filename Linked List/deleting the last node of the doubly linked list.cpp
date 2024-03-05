#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *prev;
	Node *next;
	Node(int x){
		data=x;
		prev=NULL;
		next=NULL;
	}
};

Node *delLastNode(Node *head){
    if(head==NULL){
    	return NULL;
	}
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	Node *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
		
	}
	curr->prev->next=NULL;
	delete curr;
	return head;
}

void PrintList(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->next;
	}
}

int main(){
	Node *head=new Node(20);
	Node *temp1=new Node(30);
	Node *temp2=new Node(40);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	cout<<"Before removing the Last node we get:"<<endl;
	PrintList(head);
	cout<<"After removing the last node we get:"<<endl;
	delLastNode(head);
	PrintList(head);
	
	
return 0;
}
