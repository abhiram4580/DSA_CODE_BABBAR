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

bool IsLoop(Node *head){
    unordered_set<Node *>s;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        if(s.find(curr)!=s.end()){
            return true;
        }
        else{
            s.insert(curr);
        }
    }
    return false;
}

int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *temp3=new Node(40);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    
    int x=IsLoop(head);
    cout<<x<<endl;
    return 0;
    
}