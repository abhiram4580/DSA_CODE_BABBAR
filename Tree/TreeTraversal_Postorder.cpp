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

void Preorder(Node *root){
    if(root!=NULL){
        cout<<root->data<<endl;
        Preorder(root->left);
        Preorder(root->right);
        
        

    }

}

int main(){
    Node *root=new Node(20);
    root->left=new Node(30);
    root->right=new Node(40);
    root->left->left=new Node(60);
    root->right->right=new Node(70);
    Preorder(root);

return 0;

}