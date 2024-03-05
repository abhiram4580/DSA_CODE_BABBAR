#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


struct Node{
    Node *next=NULL;
    int data;
    Node(int x){
        data=x;
        next=NULL;
    }
};

int Intersection(Node *head1,Node *head2){
     Node *curr=head1;
     int count1=0;
     int count2=0;
     while(curr!=NULL){
        curr=curr->next;
        count1++;

     }
     curr=head2;
     while(curr!=NULL){
        curr=curr->next;
        count2++;
     }
     int x=abs(count1-count2);
     Node *curr3;
     Node *curr4;
     if(count1>count2){
        curr3=head1;
        for(int i=0;i<x;i++){
            curr3=curr3->next;
        }
     }
        
     else{
        curr4=head2;
        for(int i=0;i<x;i++){
            curr4=curr4->next;
        }

     }
     while(curr3!=curr4){
        curr3=curr3->next;
        curr4=curr4->next;
     }
     if(curr3==NULL || curr4==NULL){
     return -1;}
     else{
        return curr3->data;
     }
     
}

int main(){
    Node *head1=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *temp3=new Node(40);
    Node *head2=new Node(25);
    head1->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    head2->next=temp2;
    int x=Intersection(head1,head2);
    cout<<x<<endl;
    return 0;
}


