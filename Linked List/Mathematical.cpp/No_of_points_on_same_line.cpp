class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxi=0;
    

        int n=points.size();
        if(n==1){
            return 1;
        }
        for(int i=0;i<n;i++){
            unordered_map<double,int>mp;
            int x=points[i][0];
            int y=points[i][1];
            for(int j=0;j<n;j++){
                if(i!=j){
                  int k=points[j][0];
                  int l=points[j][1];
                  if(x==k){
                      mp[INT_MAX]++;
                      
                  }
                  else if(y==l){
                      mp[0]++;
                  }
                  else{
                      double div=static_cast<double>(y - l) / (x - k);
                      mp[div]++;
                  }
                }

            }
            for(auto x:mp){
                maxi=max(x.second+1,maxi);
            }
        }
        return maxi;
    }
};