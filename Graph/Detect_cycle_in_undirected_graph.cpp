#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}



bool DFSREC(vector<int>adj[],int s,bool visited[],int parent){
   visited[s]=true;
   for(int x:adj[s]){
       if(visited[x]==false){
          if(DFSREC(adj,x,visited,s)==true){
            return true;
          }
       }
       else if(parent!=s){
        return true;
       }
   }
   return false;
}

bool DFS(vector<int>adj[],int v){
    bool visited[v]={false};
    for(int i=0;i<v;i++){
       if(visited[i]==false){
         if(DFSREC(adj,i,visited,-1)==true){
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
    cout<<DFS(adj,v)<<endl;
    return 0;
}








