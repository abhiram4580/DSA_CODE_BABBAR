 vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>dist(V,INT_MAX);
        dist[S]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,S});
        while(pq.empty()==false){
            auto it=pq.top();
            pq.pop();
            int x=it.second;
            int y=it.first;
            for(auto i:adj[x]){
                int k=i[1];
                int l=i[0];
                if(dist[l]>k+dist[x]){
                    dist[l]=k+dist[x];
                    pq.push({dist[l],l});
                }
            }
        }
        return dist;
    }