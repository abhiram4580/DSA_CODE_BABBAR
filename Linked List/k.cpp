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

Node *delHead(Node *head){
	Node *temp=head;
	head=head->next;
	delete (temp);
	return head;
}

Node *delEnd(Node *head){
	if(head==NULL){
		return NULL;
	}
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	Node *curr=head;
while(curr->next->next!=NULL){
	curr=curr->next;
}
delete (curr->next);
return head;
	
}

PrintList(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->next;
	}
}

int main(){
	Node *head= new Node(20);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	PrintList(head);
	head=delEnd(head);
	PrintList(head);
	
	return 0;
}
