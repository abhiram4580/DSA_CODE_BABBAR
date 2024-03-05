#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Peru(vector<int>ds,vector<vector<int>>ans,vector<int>arr,int freq[]){
    if(ds.size()==arr.size()){
        ans.push_back(ds);
    }

    for(int i=0;i<arr.size();i++){
        if(!freq[i]){
            freq[i]=1;
            ds.push_back(arr[i]);
            Peru(ds,ans,arr,freq);
            ds.pop_back();
            freq[i]=0;

        }
    }
}

vector<vector<int>>Fun(vector<vector<int>>ans,vector<int>arr,int n){
    int freq[n]={0};
    vector<int>ds;
    Peru(ds,ans,arr,freq);
    return ans;
}

int main(){
    vector<int>arr{1,1,2,3};
    int n=4;
    vector<vector<int>>ans;
    vector<vector<int>>final;
    final=Fun(ans,arr,n);
    for(int i=0;i<final.size();i++)
    
}
