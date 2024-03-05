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
struct MyQueue{
   Node *front;
   Node *rear;
   int size;
   MyQueue(){
    front=NULL;
    rear=NULL;
    size=0;
   }

  
void Enqueue(int x){
    Node *temp=new Node(x);
    if(front==NULL){
        front=rear=NULL;
        size++;
        return ;
    }
    rear->next=temp;
    rear=temp;
    size++;
    return;

}
void Dequeue(){
    if(front==NULL){
        return;
    }
   
    if(front==NULL){
        rear=NULL;
    }
    Node *temp=front;
    front=front->next;
    delete(temp);
    size--;
    
}

int getSize(){
    return size;
}

};

int main(){
    MyQueue q;
    q.Enqueue(10);
    q.Enqueue(5);
    cout<<q.getSize()<<endl;
    q.Dequeue();
    q.Dequeue();
    cout<<q.getSize()<<endl;
    return 0;
    

}