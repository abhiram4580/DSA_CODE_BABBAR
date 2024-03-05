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

int SearchNode(Node *head,int x){
	{
		int pos=1;
		Node *curr=head;
		while(curr!=NULL){
			if(curr->data==x){
				cout<<pos<<endl;
				break;
			}
			else{
				pos++;
				curr=curr->next;
			}
			      
	}
 return -1;
	}
}

int main(){
	Node *head= new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(39);
	head->next->next->next=new Node(44);
	SearchNode(head,2);
	
return 0;
}
   
