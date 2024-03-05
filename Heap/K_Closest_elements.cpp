#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        
        vector<int>v;
        bool visited[n]={false};
        for(int i=0;i<k;i++){
          int  min_diff=INT_MAX;
           int min_idx;
           for(int j=0;j<n;j++){
               if(visited[j]==false && abs(x-arr[j])<=min_diff){
                   min_diff=abs(x-arr[j]);
                   min_idx=j;
               }
           }
           v.push_back(arr[min_idx]);
           visited[min_idx]=true;
        }
        return v;
    }

int main(){
    vector<int>v{5,4,3,2,1};
    int n=5;
    int x=6;
    int k=2;
    vector<int>s;
    s=printKClosest(v,n,k,x);
    for(int i=0;i<k;i++){
        cout<<s[i]<<" ";

    }
    return 0;
    

}