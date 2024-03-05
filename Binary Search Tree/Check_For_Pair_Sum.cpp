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
bool IsPair(Node *curr,int sum,unordered_set<int>&s){
        if(curr==NULL){
            return false;
        }
        if(IsPair(curr->left,sum,s)==true){
            return true;
        }
        if(s.find(sum-curr->data)!=s.end()){
            return true;
        }
        else{
            s.insert(curr->data);
        }
    return IsPair(curr->right,sum,s);
 }
    
    int isPairPresent(struct Node *root, int target)
    {

    unordered_set<int>s;
    return IsPair(root,target,s);
}

int main(){
    Node *root=new Node(40);
    root->left=new Node(30);
    root->right=new Node(50);
    root->left->left=new Node(20);
    int target=60;
    int x=isPairPresent(root,target);
    cout<<x<<endl;
    return 0;
}