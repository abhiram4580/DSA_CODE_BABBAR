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

int diameter(Node *root){
    int res=0;
    if(root==NULL){
        return 0;
    }
    int lh=diameter(root->left);
    int rh=diameter(root->right);
    res=max(res,1+rh+lh);
    return 1+max(lh,rh);

}

int main(){
    Node *root=new Node(40);
    root->left=new Node(50);
    root->right=new Node(60);
    root->left->left=new Node(70);
    root->left->right=new Node(80);
    root->left->left->left=new Node(60);
    int ans=diameter(root);     
    cout<<ans<<endl;
    return 0;
}