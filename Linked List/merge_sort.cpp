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

Node *Middle(Node *head1){
        Node *slow=head1;
        Node *fast=head1->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    Node *Merge(Node *left,Node *right){
        if(left==NULL){
            return right;
        }
        if(right==NULL){
            return left;
        }
        Node *ans=new Node(1);
        Node *temp=ans;
        while(left!=NULL && right!=NULL){
            if(left->data<=right->data){
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        while(left!=NULL){
           
                temp->next=left;
                temp=left;
                left=left->next;
            
        }
        while(right!=NULL){
            temp->next=right;
            temp=right;
            right=right->next;
        }
        ans=ans->next;
        return ans;
    }
    Node* mergeSort(Node* head) {
        if(head==NULL){
            return head;
            
        }
        if(head->next==NULL){
            return head;
        }
        Node *mid=Middle(head);
        Node *left=head;
        Node *right=mid->next;
        mid->next=NULL;
        left=mergeSort(left);
        right=mergeSort(right);
        
        Node *head1=Merge(left,right);
        return head1;
    }
 
 void PrintList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    
 }


    int main(){
        Node *head=new Node(10);
        Node *temp1=new Node(5);
        Node *temp2=new Node(20);
        Node *temp3=new Node(13);
        head->next=temp1;
        temp1->next=temp2;
        temp2->next=temp3;
        cout<<"Before using Merge sort"<<endl;
        PrintList(head);
        cout<<endl;
        cout<<"After using Merge Sort"<<endl;
        head=mergeSort(head);
        PrintList(head);

        return 0;
        
    }