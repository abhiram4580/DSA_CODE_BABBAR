#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>ans;
	    vector<int>indegree(V,0);
	    for(int i=0;i<V;i++){
	         for(int x:adj[i]){
	             indegree[x]++;
	         }
	         
	    }
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int u=q.front();
	        ans.push_back(u);
	        q.pop();
	        for(int x:adj[u]){
	            indegree[x]=indegree[x]-1;
	            if(indegree[x]==0){
	                q.push(x);
	            }
	        }
	    }
	    return ans;
	}