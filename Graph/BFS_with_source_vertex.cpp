#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 
void addEdge(vector<int> adj[], int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}

void PrintGraph(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        cout<<i;
        for(auto x:adj[i]){
            cout<<"->"<<x;
        }
    }
    cout<<"\n";
}

void BFS(vector<int>adj[],int s,int v){
    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i:adj[u]){
            if(visited[i]==false){
                visited[i]=true;
                q.push(i);

            }
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
    PrintGraph(adj,v);
    int s=0;
    cout<<endl;
    cout<<"The BFS Traversal of the Graph"<<endl;
    BFS(adj,s,v);
    return 0;

}



