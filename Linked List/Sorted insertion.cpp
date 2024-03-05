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
	temp1->next=temp2;
	cout<<"Before insertion of the given integer"<<endl;
	PrintList(head);
	cout<<"After the insertion of the given integer:"<<endl;
    SortedInsert(head,25);
    PrintList(head);
    
return 0;
}


