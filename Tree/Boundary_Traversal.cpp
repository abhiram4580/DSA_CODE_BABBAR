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

int isLeaf(Node *x){
        if(x->left==NULL && x->right==NULL){
            return 1;
        }
        return 0;
    }
    
    void Boundaryleft(Node *t,vector<int>&v){
        if(t==NULL){
            return ;
        }
        
        Node *curr=t->left;
        while(curr!=NULL){
           if(isLeaf(curr)==0){
               v.push_back(curr->data);
           }
           if(curr->left){
               curr=curr->left;
           }
           else{
               curr=curr->right;
           }
        }
    }
    void Boundaryright(Node *t,vector<int>&v){
        if(t==NULL){
            return ;
        }
       
        Node *curr=t->right;
        while(curr!=NULL){
            if(isLeaf(curr)==0){
                v.push_back(curr->data);
            }
            if(curr->right){
                curr=curr->right;
            }
            else{
                curr=curr->left;
            }
        }
        reverse(v.begin(),v.end());
    }
    void printLeaf(Node *t,vector<int>&v){
        if(t==NULL){
            return ;
        }
        
        Node *curr=t;
        if(isLeaf(curr)==1){
            v.push_back(curr->data);
            return ;
        }
        if(curr->left){
            printLeaf(curr->left,v);
        }
        if(curr->right){
            printLeaf(curr->right,v);
        }
        
        
    }
        
        
        
    
    
    
    
    vector <int> boundary(Node *root)
    {
        //Your code here
         vector<int>v;
         vector<int>v2;
        if(isLeaf(root)){
            return {1};
            
        }
        v.push_back(root->data);
       
        Boundaryleft(root,v);
        printLeaf(root,v);
        int size=v.size();
        Boundaryright(root,v2);
        for(int i=0;i<v2.size();i++){
            v.push_back(v2[i]);
        }
        
        return v;
    }

    int main(){
       Node *root=new Node(10);
       root->left=new Node(20);
       root->left->left=new Node(30);
       root->left->right=new Node(40);
       root->left->right->right=new Node(60);
       root->right=new Node(50);
       root->right->right=new Node(70);
       root->left->right->left=new Node(50);
       vector<int>v;
       vector<int>v1;
       Boundaryleft(root,v);
       printLeaf(root,v);
       Boundaryright(root,v1);
       for(int i=0;i<v1.size();i++){    
           v.push_back(v1[i]);
       }

           
       for(int i=0;i<v.size();i++){
           cout<<v[i]<<" ";
       }
       cout<<endl;
         return 0;
    }