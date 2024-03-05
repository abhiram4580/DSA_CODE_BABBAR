#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int k=3;
    int n=6;
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+k);
    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);

        }
    }
    while(pq.empty()==false){
        cout<<pq.top()<<endl;
        pq.pop();
    }
return 0;
}