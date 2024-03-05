#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// clrscr() 
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

void PrintList1(Node *head){
	if(head==NULL){
		return ;
		
	}
	cout<<head->data<<endl;
	for(Node *p=head->next;p!=head;p=p->next){
	   cout<<p->data<<endl;
	}
	}


int main(){
	Node *head=NULL;
	head=insertatbegin(head,20);
	head=insertatbegin(head,20);
    head=insertatbegin(head,30);
	PrintList1(head);
	
return 0;
}

















