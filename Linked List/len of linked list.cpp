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

int lenof(Node *head){
	int i=0;
	for(Node*curr=head;curr!=NULL;curr=curr->next){
		i++;
		
	}
	cout<<i<<endl;
	return i;

}
void sum(Node *head){
	int data=0;
	Node *curr=head;
	while(curr!=NULL){
		data=data+curr->data;
		curr=curr->next;
	}
	cout<<data<<endl;
	
}

int main(){
	Node *head=new Node(34);
	Node *temp1=new Node(34);
	head->next=temp1;
	lenof(head);
	sum(head);
	
return 0;
}
