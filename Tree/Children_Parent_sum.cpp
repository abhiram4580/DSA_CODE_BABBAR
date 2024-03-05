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

 int isSumProperty(Node *root)
    {
    
     if(root==NULL){
         return 1;
     }
     if(root->right==NULL && root->left==NULL){
         return 1;
     }
     int sum=0;
     if(root->left!=NULL){
         sum+=root->left->data;
     }
     if(root->right!=NULL){
         sum+=root->right->data;
     }
     return ((root->data==sum)&&isSumProperty(root->left)&& isSumProperty(root->right));
    }

int main(){
    Node *root=new Node(40);
    root->left=new Node(20);
    root->right=new Node(20);
    root->left->left=new Node(20);
    int x=isSumProperty(root);
    cout<<x<<endl;
    return 0;
}