#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct  Node{
   int data;
   Node *left;
   Node *right;
   Node(int x){
    data=x;
    left=right=NULL;
   }
};

 Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root==NULL){
           return NULL;
       }
       if(root->data==n1 || root->data==n2){
           return root;
       }
       Node *lca1=lca(root->left,n1,n2);
       Node *lca2=lca(root->right,n1,n2);
       if(lca1!=NULL && lca2!=NULL){
           return root;
       }
       else if(lca1!=NULL){
           return lca1;
       }
       
       else{
           return lca2;
       }
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(30);
    root->right=new Node(40);
    root->left->left=new Node(50);
    root->left->right=new Node(51);
    root->right->left=new Node(67);
    root->right->right=new Node(88);
    int n1=50;
    int n2=88;
    Node *lc=lca(root,n1,n2);
    cout<<lc->data<<endl;
    return 0;
}