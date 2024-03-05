#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

Node *delNode(Node *head){
	if(head==NULL){
		return NULL;
	}
	else{
		head=head->next;
		return head;
	}
	
}

void PrintList(Node *head){
   Node *curr=head;
   while(curr!=NULL){
    cout<<curr->data<<endl;
    curr=curr->next;
    
   }
}

Node *InsertEnd(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL){
		return  temp;
	}
	Node *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
		
	}
	curr->next=temp;
	return head;
}


int main(){
	Node *head=NULL;
	head=InsertEnd(head,40);
	head=InsertEnd(head,60);
	head=InsertEnd(head,80);
	PrintList(head);
	head=delNode(head);
	PrintList(head);
return 0;
}





