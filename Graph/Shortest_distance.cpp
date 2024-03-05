#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}



void Distance(vector<int>adj[],int s,int v){
     int dist[v+1]={-1};
    bool visited[v+1]={false};
    queue<int>q;
    dist[s]=0;
    q.push(s);
    visited[s]=true;
    while(q.empty()==false){
       int u=q.front();
       q.pop();
       for(int i:adj[u]){
           dist[i]=dist[u]+1;
           visited[i]=true;
           q.push(i);
            
       }
    }
    for(int i=0;i<v;i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;
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

bool visited[v+1]={false};
Distance(adj,s,v);
return 0;

}