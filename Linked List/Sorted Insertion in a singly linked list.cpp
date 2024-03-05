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
void PrintList(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->next;
		}
}
Node *SortedInsert(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL){
		return temp;
	}
	if(x<head->data){
		temp->next=head;
		return temp;
	}
	Node *curr=head;
	while(curr->next!=NULL && curr->next->data<x){
		curr=curr->next;
		
	}
	temp->next=curr->next;
	curr->next=temp;
	return head;
}

int main(){
	Node *head=NULL;
	head= insertatBeginning(head,40);
	head= insertatBeginning(head,30);
	head= insertatBeginning(head,20);
	cout<<"The data before sorted insertion is:"<<endl;
	PrintList(head);
	cout<<"The data after sorted insertion is:"<<endl;
	head=SortedInsert(head,10);
	PrintList(head);
	
	return 0;
}

