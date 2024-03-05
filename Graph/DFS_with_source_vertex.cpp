#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}


void DFS(vector<int>adj[],int v,bool visited[]){
    visited[v]=true;
    cout<<v<<" ";
    for(int i:adj[v]){ 
        if(visited[i]==false){
             DFS(adj,i,visited);
        }
    }
}


    int main(){
    int v=5;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    
    int s=0;
    cout<<endl;
    cout<<"The DFS Traversal of the Graph"<<endl;
    bool visited[v+1]={false};
    DFS(adj,s,visited);
    return 0;

}


