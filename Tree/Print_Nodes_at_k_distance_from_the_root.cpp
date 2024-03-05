#include<iostream>
#include<bits/stdc++.h>
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

void PrintKdist(Node *root,int k){
    if(root==NULL){
        return ;
    }
    if(k==0){
        cout<<(root->key)<<endl;

    }
    else{
        PrintKdist(root->left,k-1);
        PrintKdist(root->right,k-1);

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
    
    int k=2;
    PrintKdist(root,k);
    return 0;
}

