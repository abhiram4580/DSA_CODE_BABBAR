#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=NULL;
        right=NULL;
    }
};
 
 void Preorder(Node *root){
    if(root==NULL){
        return;
    }
    stack<Node*>s;
    Node *curr=root;
    while(curr!=NULL || s.empty()==false){
        while(curr!=NULL){
            cout<<curr->key<<endl;
            if(curr->right!=NULL){
                s.push(curr->right);
            }
            curr=curr->left;
        }
        if(s.empty()==false){
            curr=s.top();
            s.pop();
        }
    }
    


 }

 int main(){
    Node *root=new Node(20);
    root->left=new Node(30);
    root->right=new Node(40);
    Preorder(root);
    return 0;
 }

