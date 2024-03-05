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

Node *insertPos(Node *head,int data,int pos){
	Node *temp=new Node(data);
	if(head==NULL){
		return NULL;
	}
	if(pos==1){
		temp->next=head;
		return temp;
		
	}
    Node *curr=head;
    for(int i=1;i<=pos-2&&curr!=NULL;i++){
    	curr=curr->next;
    }
    	if(curr==NULL){
    		return head;
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
	cout<<"Before Insertion"<<endl;
	PrintList(head);
	cout<<"After Insertion"<<endl;
    head=insertPos(head,110,2);
    PrintList(head);
	
	return 0;
}	

