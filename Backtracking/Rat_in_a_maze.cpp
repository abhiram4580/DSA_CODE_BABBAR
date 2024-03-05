#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

 void solve(int i,int j,vector<vector<int>>&a,int n,string move,vector<string>&ans,vector<vector<int>>&vis,int di[],int dj[],string dir){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return ;
        }
        for(int ind=0;ind<4;ind++){
            int nexti=i+di[ind];
            int nextj=j+dj[ind];
            if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && (vis[nexti][nextj]==0)&& (a[nexti][nextj]==1)){
                vis[i][j]=1;
                solve(nexti,nextj,a,n,move+dir[ind],ans,vis,di,dj,dir);
                vis[i][j]=0;
            }
        }
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        int di[4]={1,0,0,-1};
        int dj[4]={0,-1,1,0};
        string dir="DLRU";
        string mov="";
        vector<vector<int>>vis(n,vector<int>(n,0));
        if(m[0][0]==1){
            solve(0,0,m,n,mov,ans,vis,di,dj,dir);
        }
        return ans;
        
        
    }

int main(){
    int n;
    cin>>n;
    vector<vector<int>>m(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    vector<string>ans=findPath(m,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}