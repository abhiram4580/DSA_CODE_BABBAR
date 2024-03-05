#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsPair(int arr[],int n,int k){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(k-arr[i])==s.end()){
            return true;
        }
        else{
            s.insert(arr[i]);
        }
    }
  return false;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int x=IsPair(arr,n,6);
    cout<<x<<endl;
    return 0;
}