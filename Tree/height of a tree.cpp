#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
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
int height(Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(height(root->left),height(root->right))+1;

    }
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(30);
    root->right=new Node(40);
    root->left->left=new Node(50);
    root->left->right=new Node(60);
    root->right->right=new Node(70);
    root->right->left=new Node(80);
    int z= height(root);
    cout<<z<<endl;


return 0;
}