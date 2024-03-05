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

Node *reverseDLL(Node *head){
	if(head==NULL || head->next!=NULL){
		return head;
	}
	Node *prev=NULL;
	Node *curr=head;
	while(curr!=NULL){
		prev=curr->prev;
		curr->prev=curr->next;
		curr->next=prev;
		curr=curr->prev;
		
	}
	return prev->prev;
	
	
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
	Node *temp1=new Node(20);
	Node *temp2=new Node(25);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	cout<<"Before reversing the doubly linked list it is"<<endl;
	PrintList(head);
	cout<<"After reversing the Linked list"<<endl;
	reverseDLL(head);
	PrintList(head);
	
	
return 0;
}
