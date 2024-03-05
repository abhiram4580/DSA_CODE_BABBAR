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

Node *Removedup(Node *head){
	if(head==NULL){
		return head;
	}
    Node *curr=head;
    while(curr->next!=NULL && curr!=NULL){
    	if(curr->data==curr->next->data){
    		Node *temp=curr->next;
    		curr->next=curr->next->next;
    		delete temp;
		}
		else{
			curr=curr->next;
		}
	}
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
	Node *temp2=new Node(30);
	head->next=temp1;
    temp1->next=temp2;
    cout<<"Before removing dups"<<endl;
    PrintList(head);
    cout<<"After removing the dups"<<endl;
    Removedup(head);
    PrintList(head);

    return 0;
}











