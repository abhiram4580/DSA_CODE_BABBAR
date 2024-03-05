#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct Node{
	Node *next;
	int data;
	Node(int x){
		data=x;
		next=NULL;
	}
};

struct MyStack{
   Node *head;
   int size;
   MyStack(){
   	head=NULL;
   	size=0;
   }


void push(int x){
	Node *temp=new Node(x);
	temp->next=head;
    head=temp;
    size++;
}

int pop(){
	if(head==NULL){
		return INT_MAX;
	}
	int res=head->data;
	Node *temp=head;
	head=head->next;
	delete(temp);
	size--;
	return res;
}

int peek(){
	if(head==NULL){
		return INT_MAX;
	}
	return head->data;
}

bool IsEmpty(){
	return (head==NULL);
}
};

int main(){
	MyStack s;
	s.push(4);
	s.push(5);
	s.push(6);
	s.pop();
	int x=s.peek();
	cout<<x<<endl;
	return 0;
}








