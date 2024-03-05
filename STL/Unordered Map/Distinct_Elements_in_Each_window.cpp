#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Distinct(int arr[],int n,int k){
    unordered_map<int,int>mp;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    cout<<mp.size()<<" ";
    for(int i=k;i<n;i++){
        mp[arr[i-k]]--;
        if(mp[arr[i-k]]==0){
            mp.erase(arr[i-k]);
        }
        mp[arr[i]]++;
        cout<<mp.size()<<" ";
    }
   
}

int main(){
    int arr[]={10,10,5,20,5};
    int n=5;
    int k=4;
    Distinct(arr,n,k);
    return 0;
}