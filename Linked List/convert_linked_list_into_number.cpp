#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        next=NULL;
        data=x;
    }
};

int ReturnNum(Node *head){
    if(head==NULL){
        return 0;
    }
    int count=0;
    Node *curr=head;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    curr=head;
    int num=0;
    int pwc=count-1;
    while(curr!=NULL){
       num=curr->data*pow(10,pwc)+num;
       pwc--;
    }
    return num;

}

int main(){
    Node *head=new Node(2);
    Node *temp=new Node(2);
    head->next=temp;
    int x=ReturnNum(head);
    cout<<x<<endl;
    return 0;
}