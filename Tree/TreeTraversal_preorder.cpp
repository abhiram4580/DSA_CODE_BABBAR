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

void Inorder(Node *root){
    if(root!=NULL){
        Inorder(root->left);
        cout<<root->data<<endl;
        Inorder(root->right);

    }

}

int main(){
    Node *root=new Node(20);
    root->left=new Node(30);
    root->right=new Node(40);
    root->left->left=new Node(60);
    root->right->right=new Node(70);
    Inorder(root);

return 0;

}