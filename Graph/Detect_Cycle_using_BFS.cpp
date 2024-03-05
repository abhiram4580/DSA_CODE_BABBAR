#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}

bool Isconnected(vector<int>adj[],int s,bool visited[],int v){
    visited[s]=true;
    queue<int>q;
    q.push(s);
    int parent[v]={-1};
    while(q.empty()==false){
        int x=q.front();
        q.pop();
        for(int u:adj[x]){
            if(visited[u]==false){
                visited[u]=true;
                q.push(u);
                parent[u]=x;
            }
            else if(parent[u]!=x){
                return true;
            }

        }
    }
    return false;
    
    
}

bool BFSDetect(vector<int>adj[],int v){
    bool visited[v]={false};
    
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(Isconnected(adj,i,visited,v)==true){
                return true;
            }
        }
    }
    return false;
}



int main(){
    int v=4;
    vector<int>adj[v+1];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    if(BFSDetect(adj,v)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}