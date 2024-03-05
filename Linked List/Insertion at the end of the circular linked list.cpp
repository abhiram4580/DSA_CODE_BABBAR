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

Node *insertend(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL){
		temp->next=temp;
		return temp;
	}
	else{
	temp->next=head->next;
	head->next=temp;
	int t=temp->data;
	temp->data=head->data;
	head->data=t;
	return temp;
	}
}

void PrintList(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
		
	}

	
}

int main(){
	Node *head=NULL;
	head=insertend(head,20);
	head=insertend(head,50);
    PrintList(head);
	return 0;
}












