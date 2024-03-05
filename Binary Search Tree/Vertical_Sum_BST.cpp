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

 void inorder(Node *root,int index,map<int,int>&mp)
   {
       if(root!=NULL)
       {
           inorder(root->left,index-1,mp);
           
               mp[index]+=root->data;
          
           inorder(root->right,index+1,mp);
       }
   }
    vector <int> verticalSum(Node *root) {
       map<int,int>mp;
        inorder(root,0,mp);
        vector<int>ans;
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;   
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
    v=verticalSum(root);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}