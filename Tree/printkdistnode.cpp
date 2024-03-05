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
void Printkdist(Node *root,int k){
    if(root==NULL){
        return ;
    }
    if(k==0){
        cout<<root->data<<endl;;
    }
    else{
        Printkdist(root->left,k-1);
        Printkdist(root->right,k-1);

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
    Printkdist(root,2);
    

return 0;
}