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

int Floor(Node *root,int x){
    int floor=-1;
    if(root==NULL){
        return -1;
    }
    while(root){
    if(root->data==x){
        floor=root->data;
        return floor;
    }
    else if(root->data>x){
        
        root=root->left;

    }
    else{
        floor=root->data;
        root=root->right;
    }

}
return floor;
}


int main(){
   Node *root=new Node(100);
    root->left=new Node(90);
    root->right=new Node(110);
    root->left->left=new Node(80);
    root->left->right=new Node(95);
    root->right->right=new Node(120);
    root->right->left=new Node(105);
    int z=Floor(root,91);
    cout<<z<<endl;
    
    return 0;
}
