#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}

int ActivitySelection(vector<pair<int,int>>arr,int n){
    int curr=1;
    int prev=0;
    int res=1;
    sort(arr.begin(),arr.end(),mycmp);
    for(curr=1;curr<n;curr++){
        if(arr[curr].first>=arr[prev].second){
            res++;
            prev=curr;
        }
    }
    return res;
}

int main(){
   vector<pair<int,int>>v{{3,8},{2,4},{1,3},{10,11}};
   int n=v.size();
   int res=ActivitySelection(v,n);
   cout<<res<<endl;
   return 0;



    }
