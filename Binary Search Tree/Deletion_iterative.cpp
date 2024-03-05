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

Node *getSucc(Node *root){
    Node *curr=root->right;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->right;
    }
    return curr;


}

Node *DelNode(Node *root,int x){
    if(root==NULL){
        return NULL;
    }
    else if(root->data>x){
        root->left=DelNode(root->left,x);
    }
    else if(root->data<x){
        root->right=DelNode(root->right,x);
    }
    else{
       if(root->right==NULL){
        Node *temp=root->left;
        delete root;
        return temp;
       }
       else if(root->left==NULL){
        Node *temp=root->right;
        delete root;
        delete root;      
         }
        else {
            Node *succ=getSucc(root);
            root->data=succ->data;
            root->right=DelNode(root->right,succ->data);
        }
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
    DelNode(root,80);
    Preorder(root);
    return 0;
}