#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *left;
    Node *right;
    int data;
    Node (int x){
        data=x;
        left=NULL;
        right=NULL;

    }
};

bool ISBST(Node *root,int min,int max){
    if(root==NULL){
        return true;
    }
   
    return (root->data>min && root->data<max && ISBST(root->left,min,root->data)&&ISBST(root->right,root->data,max));
    
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(10);
    root->right=new Node(40);
    int x=ISBST(root,INT_MIN,INT_MAX);
    cout<<x<<endl;
    return 0;
}
