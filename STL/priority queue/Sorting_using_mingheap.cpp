#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Mysort(int arr[],int n){
    priority_queue<int>pq(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        arr[i]=pq.top();
        pq.pop();
    }

}

int main(){
    int arr[]={12,3,4};
    int n=3;
    Mysort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}