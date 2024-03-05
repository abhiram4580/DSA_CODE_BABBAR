#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=NULL;
        right=NULL;
    }
};

void IterativeInorder(Node *root){
    if(root==NULL){
        return ;
    }
    stack<Node*>st;
    Node *curr=root;
    while(curr!=NULL || st.empty()==false){
    while(curr!=NULL){
        st.push(curr);
        curr=curr->left;
        
    }
    curr=st.top();
    st.pop();
    cout<<curr->key<<endl;
    curr=curr->right;
    }
    
}

int main(){
    Node *root=new Node(20);
    root->left=new Node(30);
    root->right=new Node(40);
    root->left->left=new Node(50);
    root->left->left=new Node(60);
    IterativeInorder(root);
    return 0;
}
