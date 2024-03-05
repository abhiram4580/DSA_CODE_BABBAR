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

int minDepth(Node *root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    if(root->left==NULL){
        return minDepth(root->right)+1;
    }
    if(root->right==NULL){
        return minDepth(root->left)+1;
    }
    return min(minDepth(root->left),minDepth(root->right))+1;
}


int main(){
    Node *root=new Node(12);
    root->left=new Node(5);
    root->right=new Node(7);
    root->left->left=new Node(3);
    root->left->right=new Node(9);
    cout<<minDepth(root)<<endl;
    return 0;
}