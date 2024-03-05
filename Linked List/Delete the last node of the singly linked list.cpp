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

Node *insertatBeginning(Node *head,int x){
	Node *temp=new Node(x);
	temp->next=head;
	return temp;
	
}

Node *delLast(Node *head){
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
delete(curr->next);
curr->next=NULL;
return head;

}

void PrintList(Node *head){
	Node*curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" "<<endl;;
		curr=curr->next;
		
	}
	
}

int main(){
	Node *head=NULL;
	head=insertatBeginning(head,40);
	head=insertatBeginning(head,50);
	head=insertatBeginning(head,60);
	PrintList(head);
	head=delLast(head);
	PrintList(head);
return 0;
}














