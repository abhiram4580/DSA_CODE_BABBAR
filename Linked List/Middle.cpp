#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node (int x){
		data=x;
		next=NULL;
	}
};

Node *MiddleList(Node *head){
	if(head==NULL){
		return NULL;
	}
	
	Node *curr1=head;
	Node *curr2=head;
	while(curr2!=NULL && curr2->next!=NULL){
		curr2=curr2->next->next;
		curr1=curr1->next;
		
	}
	cout<<curr1->data;
	return head;
}

int main(){
	Node *head=new Node(20);
	Node *temp1=new Node(30);
	Node *temp2=new Node(40);
	
	head->next=temp1;
	temp1->next=temp2;
	
    MiddleList(head);
    
return 0;
}






















