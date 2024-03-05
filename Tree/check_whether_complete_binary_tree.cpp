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

bool isCompleteBT(Node* root){
        queue<Node*>q;
        q.push(root);
        while(q.empty()==false && q.front()!=NULL){
            Node *curr=q.front();
            q.pop();
            q.push(curr->left);
            q.push(curr->right);
        }
        while(q.empty()==false){
            if(q.front()!=NULL){
                return false;
            }
            q.pop();
        }
        return true;
        
    }

    int main(){
        Node *root=new Node(30);
        root->left=new Node(20);
        root->right=new Node(50);
        root->left->right=new Node(60);
        int ans=isCompleteBT(root);
        cout<<ans<<endl;
        return 0;
    }