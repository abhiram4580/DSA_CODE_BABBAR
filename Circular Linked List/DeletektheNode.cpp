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

Node *delkthNode(Node *head,int k){
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        delete(head);
        return NULL;
    }
    int len=0;
    Node *curr=head;
   
    for(int i=0;i<k-2;i++){
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete(temp);
    
    return  head;


}

void PrintList(Node *head){
    Node *curr=head->next;
    cout<<head->data<<endl;
    while(curr!=head){
        cout<<curr->data<<endl;
        curr=curr->next;
    }


}

int main(){
     Node *head=new Node(10);
     Node *temp1=new Node(20);
     Node *temp2=new Node(30);
     head->next=temp1;
     temp1->next=temp2;
     temp2->next=head;
     head=delkthNode(head,2);
     PrintList(head);


     return 0;
     

}