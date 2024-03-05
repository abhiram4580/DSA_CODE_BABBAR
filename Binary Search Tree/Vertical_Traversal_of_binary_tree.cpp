#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *left;
    Node *right;
    int data;
    Node (int x){
        data=x;
        left=NULL;
        right=NULL;

    }
};

vector<int> verticalOrder(Node *root)
    {
        
        map<int,vector<int>>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(q.empty()==false){
            auto p=q.front();
            Node *curr=p.first;
            int hd=p.second;
            mp[hd].push_back(curr->data);
            q.pop();
            if(curr->left!=NULL){
                q.push({curr->left,hd-1});
            }
            if(curr->right!=NULL){
                q.push({curr->right,hd+1});
        }
                }
            
        
        vector<int>v;
        for(auto it:mp){
            for(auto l:it.second){
                v.push_back(l);
            }
        }
        return v;
    }

int main(){
    Node *root=new Node(20);
    root->left=new Node(40);
    root->right=new Node(50);
    root->left->left=new Node(60);
    root->left->right=new Node(50);
    root->right->right=new Node(60);
    root->right->left=new Node(40);
    vector<int>v;
    v=verticalOrder(root);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}