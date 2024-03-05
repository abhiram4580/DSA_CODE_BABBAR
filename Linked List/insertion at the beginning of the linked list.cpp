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

Node *insertatBeginning(Node *head,int x){
	Node *temp=new Node(x);
	temp->next=head;
	return temp;
	
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
	head=insertatBeginning(head,40);
	head=insertatBeginning(head,50);
	head=insertatBeginning(head,60);
	PrintList(head);
return 0;
}
