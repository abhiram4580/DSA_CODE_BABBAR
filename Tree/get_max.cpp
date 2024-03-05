#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node (int k){
       key=k;
       left=NULL;
       right=NULL;
    }
};

int GetMax(Node *root){
    if(root==NULL){
        return INT_MIN;
    }
    else{
        return max(root->key,max(GetMax(root->left),GetMax(root->right)));
    }

}

int main(){
    Node *root=new Node(20);
    root->right=new Node(30);
    root->left=new Node(40);
    int x=GetMax(root);
    cout<<x<<endl;


    return 0;
}