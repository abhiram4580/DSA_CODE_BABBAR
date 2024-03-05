#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintSubsequence(int ind,int n,int arr[],vector<int>&ds){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    // Pick the element
    ds.push_back(arr[ind]);
    PrintSubsequence(ind+1,n,arr,ds);
    ds.pop_back();
    // Not pick the element
    PrintSubsequence(ind+1,n,arr,ds);
}

int main(){
    int arr[]={1,2,3};
    int n=3;
    vector<int>ds;
    PrintSubsequence(0,n,arr,ds);
    return 0;
}