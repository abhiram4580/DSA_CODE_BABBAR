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

Node *insertatBegin(Node*head,int x){  
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

void Printnthend(Node *head,int n){
	if(head==NULL){
		return ;
	}
    Node *first=head;
    for(int i=0;i<n;i++){
    	if(first==NULL){
    		return;
		}
    	first=first->next;
	}
	Node *second=head;
	while(first!=NULL){
		first=first->next;
		second=second->next;
		
	}
	cout<<second->data;
}

int main(){
	Node *head=NULL;
	head=insertatBegin(head,2);
	head=insertatBegin(head,4);
	head=insertatBegin(head,5);
	head=insertatBegin(head,3);
	Printnthend(head,2);
	return 0;
}






