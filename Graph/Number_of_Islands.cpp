class Solution {
  public:
    // Function to find the number of islands.
    
   void bfs(vector<vector<char>>grid,vector<vector<int>>&visited,int row,int col){
        visited[row][col]=1;
       queue<pair<int,int>>q;
       int n=grid.size();
       int m=grid[0].size();
      
       q.push({row,col});
       
       while(q.empty()==false){
           auto x=q.front();
           int k=x.first;
           int l=x.second;
          q.pop();
       for(int i=-1;i<=1;i++){
           for(int j=-1;j<=1;j++){
               int row1=k+i;
               int col1=l+j;
               if(k+i<n && k+i>=0 && l+j>=0 && l+j<m){
                   if(grid[row1][col1]=='1' && visited[row1][col1]==0){
                       visited[row1][col1]=1;
                       q.push({row1,col1});
                   }
               }
           }
       }
   }
   
   }
    
    
    
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==0 && grid[i][j]=='1'){
                    count++;
                    bfs(grid,visited,i,j);
                }
            }
        }
        return count;
    }
};