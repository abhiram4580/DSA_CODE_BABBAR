#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node (int x){
        data=x;
        next=NULL;
    }
};

struct Mystack{
    Node *head;
    int size;
    Mystack(){
        size=0;
        head=NULL;
    }


void push(int x){
   Node *temp=new Node(x);
   temp->next=head;
   head=temp;
   size++;
  
   
   
}

int pop(){
    if(head==NULL){
        cout<<"Stack overflow"<<endl;
        
    }
    int res=head->data;
    Node *temp=head;
    head=head->next;
    size--;
    delete(temp);
    return res;
}

int sizes(){
    return size;
}
bool isEmpty(){
    return (size==0);
}




};

int main(){
   Mystack s;
   s.push(5);
   s.push(10);
   s.push(30);
   cout<<s.pop()<<endl;
   cout<<s.sizes()<<endl;


   return 0;

}