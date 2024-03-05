#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *prev;
	Node(int x){
		data=x;
		next=NULL;
		prev=NULL;
	}
};

Node *cdoublyathead(Node *head,int data){
	Node *temp=new Node(data);
	if(head==NULL){
		temp->prev=temp;
		temp->next=temp;
		return temp;
	}
    temp->next=head;
    temp->prev=head->prev;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}

void PrintList(Node *head){
	Node *curr=head;
    while(curr->next!=head){
    	cout<<curr->data<<endl;
    	curr=curr->next;
	}
	
}

int main(){
	Node *head=new Node(20);
	Node *temp1=new Node(30);
	Node *temp2=new Node(40);
	head->prev=temp2;
	head->next=temp1;
	temp1->next=temp2;
	temp1->prev=head;
	temp2->prev=temp1;
    PrintList(head);
    head=cdoublyathead(head,79);
    PrintList(head);
return 0;
}
