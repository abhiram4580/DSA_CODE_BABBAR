#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LCS(int arr[],int n){
    set<int>s;
    int res=1;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(arr[i])!=s.end()){
            int curr=1;
            while(s.find(arr[i]+curr)!=s.end()){
                curr++;
            }
            res=max(curr,res);
        }
    }
    return res;
}

int main(){
    int arr[]={5,3,7,6,8};
    int n=5;
    int x=LCS(arr,n);
    cout<<x<<" ";
    return 0;
}