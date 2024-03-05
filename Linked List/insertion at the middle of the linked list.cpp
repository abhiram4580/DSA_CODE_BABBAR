#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		next=NULL;
		data=x;
	}
};

Node *insertatMiddle(Node *head,int x){
	Node *temp=new Node(x);
	Node *slow=head;
	Node *fast=head;
    while( fast!=NULL && fast->next!=NULL ){
    	slow=slow->next;
    	fast=fast->next->next;
    	
	}
	temp->next=slow->next;
	slow->next=temp;
	
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
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	Node *temp3=new Node(40);


	
	head->next=temp1;
	temp1->next=temp2;
    temp2->next=temp3;
	cout<<"Before insertion in the middle of the linked list:"<<endl;
	PrintList(head);
	cout<<"After insertion in the middle of the linked list:"<<endl;
	insertatMiddle(head,67);
	PrintList(head);
	
return 0;
	
}
