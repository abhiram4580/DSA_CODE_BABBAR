#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        bool visited[V]={false};
        int weight=0;
        
        while(pq.empty()==false){
            auto p=pq.top();
            int wt=p.first;
            int u=p.second;
            pq.pop();
            if(visited[u]==true){
                continue;
            }
            visited[u]=true;
            weight=weight+wt;
            for(auto x:adj[u]){
                
                int k=x[0];
                int l=x[1];
              if(visited[k]==false){
                pq.push({l,k});
              }
                
            }
            
            
        }
        return weight;
    }