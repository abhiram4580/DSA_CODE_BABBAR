#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	
	Node (int x){
		data=x;
		next=NULL;
	}
};

void binary(Node *head){
	Node *curr=head;
	int length=0;
	while(curr!=NULL){
		length++;
		curr=curr->next;
	}
	
   Node *curr1=head;
   int sum=0;
   for(curr1=head;curr1!=NULL;curr1=curr1->next){
   	   sum=sum+curr1->data*pow(2,length-1);
   	   length--;
   }
   cout<<sum<<endl;
}

int main(){
	Node *head=new Node(1);
	Node *temp1=new Node(1);
	head->next=temp1;
	binary(head);
	
return 0;
}


