#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    if(lh==-1){
        return -1;
    }
    int rh=height(root->right);
    if(rh==-1){
        return -1;
    }
    if(abs(lh-rh)>1){
        return -1;
    }
    return max(rh,lh)+1;
}

bool Isbalanced(Node *root){
    return(height(root)!=-1);
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    int x=Isbalanced(root);
    cout<<x<<endl;
    return 0;
}