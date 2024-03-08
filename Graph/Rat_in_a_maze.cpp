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
                move.push_back(dir[ind]);
                solve(nexti,nextj,a,n,move,ans,vis,di,dj,dir);
                move.pop_back();
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