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

void PrintMiddle(Node *head){
	if(head==NULL){
		return ;
		
	}
	Node *slow=head;
	Node *fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		
	}
	cout<<slow->data;
}

Node *insertatBegin(Node *head,int x){
	Node *temp=new Node(x);
	temp->next=head;
	return temp;
}

void PrintList(Node *head){
	Node*curr=head;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->next;
		
	}
}

int main(){
	Node *head=NULL;
	head=insertatBegin(head,10);
	head=insertatBegin(head,20);
	head=insertatBegin(head,30);
	head=insertatBegin(head,40);
	PrintMiddle(head);
	
return 0;
}




