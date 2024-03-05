#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int sum(Node *root){
    if(root==NULL){
        return 0;
    }
    int old_val = root->data;
    root->data = sum(root->left) + sum(root->right);
    return root->data + old_val;
}

void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main(){
    Node *root=new Node(12);
    root->left=new Node(5);
    root->right=new Node(7);
    root->left->left=new Node(3);
    root->left->right=new Node(9);
    sum(root);
    inorder(root);
    return 0;
}