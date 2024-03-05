#include<bits/stdc++.h>
using namespace std;


int kthSmallest(int arr[],int k,int n){
    vector<int>v;
    if(k>n){
        return -1;
    }
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
       if(pq.size()>k){
        pq.pop();
       }
    }
    int ans=pq.top();
    return ans;
}

int main(){
    int arr[]= { 10, 5, 4, 3, 48, 6, 2, 33, 53, 10 };
    int n=10;
    int k=4;
    cout<<kthSmallest(arr,k,n);
    return 0;
}

