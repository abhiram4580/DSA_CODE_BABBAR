#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data =x;
		next=NULL;
	}
};

Node *InsertEnd(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL){
		return  temp;
	}
	Node *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
		
	}
	curr->next=temp;
	return head;
}

void PrintList(Node *head){
   Node*curr=head;
   while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
   }
}


int main(){
	Node *head=NULL;
	head= InsertEnd(head,4);
	head= InsertEnd(head,5);
	head= InsertEnd(head,6);
	head= InsertEnd(head,7);
	PrintList(head);
return 0;	
}
