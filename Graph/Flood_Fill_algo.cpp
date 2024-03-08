vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int colour=image[sr][sc];
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        vector<vector<int>>visited(n,vector<int>(m,0));
        visited[sr][sc]=1;
        image[sr][sc]=color;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        while(q.empty()==false){
            auto p=q.front();
            int x=p.first;
            int y=p.second;
            q.pop();
            for(int i=0;i<4;i++){
                int row=x+dx[i];
                int col=y+dy[i];
                if(row>=0 && col>=0 && row<n && col<m && visited[row][col]==0 && image[row][col]==colour){
                    visited[row][col]=1;
                    image[row][col]=color;
                    q.push({row,col});

                }
            }
            
        }
        return image;
    }