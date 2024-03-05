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

bool IsSubTree(Node *x,Node *y){
        if(x==NULL && y==NULL){
            return true;
        }
        if(x==NULL || y==NULL){
            return false;
        }
        return (x->data == y->data && IsSubTree(x->left,y->left) && IsSubTree(x->right,y->right));
    }
    
    bool isSubTree(Node* T, Node* S) 
    {
       
        if(T==NULL){
            return false;
        }
        if(S==NULL){
            return false;
        }
        if(IsSubTree(T,S)){
            return true;
        }
        return isSubTree(T->left,S) || isSubTree(T->right,S);
        
        
    }

int main(){
    Node *root=new Node(12);
    root->left=new Node(5);
    root->right=new Node(7);
    root->left->left=new Node(3);
    root->left->right=new Node(9);
    Node *root1=new Node(5);
    root1->left=new Node(3);
    root1->right=new Node(9);
    int x=isSubTree(root,root1);
    cout<<x<<endl;
    return 0;
}