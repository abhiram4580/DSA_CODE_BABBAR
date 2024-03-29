#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
    Node *prev;
    Node *next;
    Node(int d){
    	data =d;
    	prev=NULL;
    	next=NULL;
	}
};

Node *insertBegin(Node *head,int data){
	Node *temp=new Node(data);
	temp->next=head;
	if(head!=NULL){
		head->prev=temp;
		
	}
	return temp;
}
PrintList(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->next;
		
	}
}

int main(){
   Node *head= new Node(10);
   Node *temp1=new Node(20);
   Node *temp2=new Node(30);
   head->next=temp1;
   temp1->prev=head;
   temp1->next=temp2;
   temp2->prev=temp1;
   cout<<"The Linked List before insertion is given:"<<endl;
   PrintList(head);
   head=insertBegin(head,40);
   cout<<"The List after insertion"<<endl;
   PrintList(head);

   
}
