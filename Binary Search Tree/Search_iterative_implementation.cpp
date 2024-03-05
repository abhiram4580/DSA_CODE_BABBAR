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

bool Search(Node *root,int x){
    while(root!=NULL){
        if(root->data==x){
            return true;
        }
        else if(root->data>x){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return false;
}
int main(){
    Node *root=new Node(100);
    root->left=new Node(90);
    root->right=new Node(110);
    root->left->left=new Node(80);
    root->left->right=new Node(95);
    root->right->right=new Node(120);
    root->right->left=new Node(105);
    int  s=Search(root,120);
    cout<<s<<endl;

    return 0;
}
