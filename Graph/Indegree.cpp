#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}

vector<int> Indegree(vector<int>adj[],int v){
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++){
        for(int x:adj[i]){
            indegree[x]++;
        }
    }
    return indegree;
}

int main(){
    int v=5;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    vector<int>ans;
    ans=Indegree(adj,v);
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
    

}