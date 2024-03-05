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

void topView(Node *root){
    if(root == NULL)
        return;
    queue<pair<Node*, int>> q;
    map<int, int> mp;
    q.push({root, 0});
    while(!q.empty()){
        Node *temp = q.front().first;
        int h = q.front().second;
        q.pop();
        if(mp.find(h) == mp.end())
            mp[h] = temp->data;
        if(temp->left)
            q.push({temp->left, h-1});
        if(temp->right)
            q.push({temp->right, h+1});
    }
    for(auto x: mp)
        cout<<x.second<<" ";
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);
    topView(root);
    return 0;
}