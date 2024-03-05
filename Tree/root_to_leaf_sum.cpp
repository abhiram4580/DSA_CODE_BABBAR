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


  bool hasPathSum(Node *root, int S) {
    // Your code here
    if(root==NULL){
        return false;
    }
    if(root->left==NULL && root->right==NULL){
        if(S-root->data==0){
            return true;
        }
    }
    return hasPathSum(root->left,S-root->data) || hasPathSum(root->right,S-root->data);

}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);
    int S=100;
    cout<<hasPathSum(root,S);
    return 0;
}