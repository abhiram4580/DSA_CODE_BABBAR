#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>MergeOverlapping(vector<vector<int>>v){
    sort(v.begin(),v.end());
    vector<vector<int>>ans;
    int start1=v[0][0];
    int end1=v[0][1];
    
    for(int i=1;i<v.size();i++){
         int start2=v[i][0];
         int end2=v[i][1];
         if(end1<start2){
           ans.push_back({start1,end1});
           start1=start2;
           end1=end2;
         }
         else{
            
            end1=max(end1,end2);
         }
         
    }
    ans.push_back({start1,end1});
    return ans;
}

int main(){
    vector<vector<int>>v{{1,3},{2,4},{6,8},{9,10}};
    vector<vector<int>>ans;
    ans=MergeOverlapping(v);
    for(int i=0;i<ans.size();i++){
       cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
       
    }
    return 0;

}