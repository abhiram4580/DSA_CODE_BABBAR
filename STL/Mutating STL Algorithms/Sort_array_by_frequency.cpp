#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool MyCmp(pair<int,int>a,pair<int,int>b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second>b.second;
}

void SortfreqArray(int arr[],int n){
   
    unordered_map<int,int>mp;
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<pair<int,int>>v{mp.begin(),mp.end()};
    sort(v.begin(),v.end(),MyCmp);
    for(auto x:v){
        cout<<x.first<<endl;
    }
}

int main(){
    int arr[]={10,5,20,10,10,5,20};
    int n=7;
    SortfreqArray(arr,n);
    return 0;
}

