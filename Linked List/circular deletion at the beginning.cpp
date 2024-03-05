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

Node *insertatbegin(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL){
	    temp->next=temp;
	}
	else{
	    Node *curr=head;
	    while(curr->next!=NULL){
	    	curr=curr->next;
	    }
	    curr->next=temp;
	    temp->next=head;   
		
	}
	return temp; 
	
}



Node delhead(Node *head){
	if(head==NULL){
		return NULL;
	}
	
	if(head->next==head){
		delete head;
		return NULL;
	}
	Node *curr=head;
	while(curr->next!=head){
		curr=curr->next;
		
	}
	curr->next=head->next;
	delete head;
	return curr->head;
	
}

void PrintList(Node *head){
	Node *temp=head;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->next;
	}
}
 


int main(){
	Node *head=NULL;
	head=insertbegin(head,50);
	head=insertbegin(head,60);
	head=insertbegin(head,70);
	PrintList(head);
	head=delhead(head);
	PrintList(head);
	lenof(head);
	
	
	
	
return 0;
}





