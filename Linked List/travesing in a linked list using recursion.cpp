#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next= NULL;
	}
	
};
void Rprint(Node *head){
	if(head==NULL){
		return;
	}
	cout<<(head->data)<<" ";
	Rprint(head->next);
}

int main(){
	Node *head= new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(39);
	head->next->next->next=new Node(44);
	Rprint(head);
}
   
