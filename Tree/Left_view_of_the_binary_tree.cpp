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

void LeftView(Node *root){
    queue<Node *>q;
    q.push(root);
    if(root==NULL){
        return;
    }
    while(q.empty()==false){
        int count=q.size();
        for(int i=0;i<count;i++){
            Node *curr=q.front();
            q.pop();
            if(i==0){
            cout<<curr->data<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
            
        }
    }
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(30);
    root->right=new Node(40);
    root->left->left=new Node(50);
    root->left->left->left=new Node(60);
    LeftView(root);
    return 0;
}
