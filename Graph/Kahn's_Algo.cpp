#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}

bool Detect(vector<int>adj[],int s,int v){
    int indegree[v]={0};
    for(int i=0;i<v;i++){
        for(int x:adj[i]){
            indegree[x]++;
        }
    }
    
}
