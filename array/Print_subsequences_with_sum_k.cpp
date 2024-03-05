#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintSubsequence(int ind,int n,int arr[],vector<int>&ds,int sum){
    if(ind==n){
        if(sum==0){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    // Pick the element
    ds.push_back(arr[ind]);
    PrintSubsequence(ind+1,n,arr,ds,sum-arr[ind]);
    ds.pop_back();
    // Not pick the element
    PrintSubsequence(ind+1,n,arr,ds,sum);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    vector<int>ds;
    int sum=0;
    sum=9;
    PrintSubsequence(0,n,arr,ds,sum);
    return 0;
}