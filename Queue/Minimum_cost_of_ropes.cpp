#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long MininumCost(long long arr[],long long n){
    priority_queue<long long,vector<long long>,greater<long long>>pq;
    for(long long i=0;i<n;i++){
        pq.push(arr[i]);
    }
    long long cost=0;
    while(pq.size()>1){
        long long first=pq.top();
        pq.pop();
        long long second=pq.top();
        pq.pop();
        cost+=first+second;
        pq.push(first+second);
    }
    return cost;
}


int main(){
    long long arr[]={2,4,6,7,9};
    long long n=sizeof(arr)/sizeof(arr[0]);
    cout<<MininumCost(arr,n)<<endl;
    return 0;
}