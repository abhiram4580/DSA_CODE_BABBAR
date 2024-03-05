#include<iostream>
#include<bits/stdc++.h>
using namespace std;



struct Node{
    Node *left;
    Node *right;
    int data;
    Node (int x){
        data=x;
        left=NULL;
        right=NULL;

    }
};

Node *insert(Node *root,int x){
    Node *temp=new Node(x);
    Node *curr=root;
    Node *parent=NULL;
    while(curr!=NULL){
        parent=curr;
        
         if(curr->data>x){
            curr=curr->left;
         }
         else if(curr->data<x){
            curr=curr->right;
         }
         else{
            return root;
         }
    }
    if(parent->data>x){
        parent->left=temp;
    }
    else if(parent->data<x){
        parent->right=temp;
    }
    else if(parent==NULL){
        return temp;
    }
 return root;
}


void Preorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    Preorder(root->left);
    Preorder(root->right);
}

int main(){
   Node *root=new Node(100);
    root->left=new Node(90);
    root->right=new Node(110);
    root->left->left=new Node(80);
    root->left->right=new Node(95);
    root->right->right=new Node(120);
    root->right->left=new Node(105);
    insert(root,20);
    Preorder(root);
    return 0;
}

