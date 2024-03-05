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

Node Printnth(Node *head,int n){
	Node *first=head;
	for(int i=0;i<n;i++){
		if(first==NULL){
			return NULL;
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
	Node *head=new Node(20);
	Node *temp1=new Node(30);
	Node *temp2=new Node(40);
	head->next=temp1;
	temp1->next=temp2;
    Printnth(head,2);
	
	return 0;
}


