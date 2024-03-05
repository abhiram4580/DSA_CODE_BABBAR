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

void Mirror(Node *root){
    if(root==NULL){
        return ;
    }
    Mirror(root->left);
    Mirror(root->right);
    swap(root->left,root->right);
}

int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(5);
    Mirror(root);
    cout<<root->left->data<<endl;
    return 0;

}