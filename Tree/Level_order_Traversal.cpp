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

void Levelorder(Node *root){
    if(root==NULL){
        return ;
    }
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
    Node *curr=q.front();
    q.pop();
    cout<<curr->key<<endl;
    if(curr->left!=NULL){
        q.push(curr->left);
    }
    if(curr->right!=NULL){
        q.push(curr->right);
    }
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

    Levelorder(root);

    return 0;
}

