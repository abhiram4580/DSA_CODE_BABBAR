#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void DFS(vector<int>adj[],int s,bool visited[],stack<int>&st){
    visited[s]=true;
    for(int x:adj[s]){
        if(visited[s]==false){
            DFS(adj,x,visited,st);
        }
       
    }
     st.push(s);
}



void DFSREC(vector<int>adj[],stack<int>st,int v){
    bool visited[v]={false};
    for(int i=0;i<v;i++){
       if(visited[i]==false){
         DFS(adj,i,visited,st);
       }
    }
    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }
    
}