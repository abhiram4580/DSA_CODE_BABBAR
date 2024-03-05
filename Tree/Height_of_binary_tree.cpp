#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=right=NULL;

    }
};

int  Height(Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return(max(Height(root->left),Height(root->right))+1);
    }
}


int main(){
    Node *root=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *temp3=new Node(40);
    Node *temp4=new Node(50);
    root->left=temp1;
    root->right=temp2;
    root->left->left=temp3;
    root->right->right=temp4;

    int x=Height(root);
    cout<<x<<endl;

    return 0;
}

