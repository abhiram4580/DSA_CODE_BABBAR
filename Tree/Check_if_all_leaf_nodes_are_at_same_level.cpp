#include<iostream>
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

bool check(Node *root)
    {
        queue<Node *>q;
        q.push(root);
        int level=0;
        int leaflevel=-1;
        while(!q.empty()){
            int n=q.size();
            
            level++;
            
            for(int i=0;i<n;i++){
                Node *curr=q.front();
                q.pop();
                
                if(curr->left==NULL && curr->right==NULL){
                    if(leaflevel==-1){
                        leaflevel=level;
                    }
                    else if(leaflevel!=level){
                        return false;
                    }
                }
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
        }
        
        return true;
        
        
    }

    int main(){
    Node *root=new Node(12);
    root->left=new Node(5);
    root->right=new Node(7);
    root->left->left=new Node(3);
    root->left->right=new Node(9);
    int x=check(root);
    cout<<x<<endl;
    return 0;
    }