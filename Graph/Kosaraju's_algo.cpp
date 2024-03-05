#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v){
     adj[u].push_back(v);
     adj[v].push_back(u);
}


 
vector<int>Transpose(vector<int>adj[],vector<int>final[],int V){
    for(int i=0;i<V;i++){
        for(int j=0;j<adj[i].size();i++){
            addEdge(final,i,adj[i][j]);
        }
    }
}



