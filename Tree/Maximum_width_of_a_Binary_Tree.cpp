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

int Width(Node *root){
    queue<Node *>q;
    q.push(root);
    int res=0;
    while(q.empty()==false){
       int count=q.size();
       res=max(res,count);
       for(int i=0;i<count;i++){
        Node *curr=q.front();
        q.pop();
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }


       }
    }
    return res;
}

int main(){
    Node *root=new Node(30);
    root->left=new Node(40);
    root->right=new Node(50);
    root->left->left=new Node(60);
    root->left->right=new Node(50);
    root->right->right=new Node(50);
    root->right->left=new Node(100);
    int x=Width(root);
    cout<<x<<endl;
    return 0;
}

