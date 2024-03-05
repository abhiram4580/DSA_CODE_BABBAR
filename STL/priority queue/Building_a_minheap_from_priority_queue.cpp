#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={7,6,4};
    int n=3;
    for(int i=0;i<n;i++){
        arr[i]=-(arr[i]);
    }
    priority_queue<int>pq(arr,arr+3);
    while(pq.empty()==false){
        cout<<-(pq.top())<<endl;
        pq.pop();
    }
    return 0;
    
}