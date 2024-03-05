#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void StockSpan(int arr[],int n){
    stack<int>s;
    s.push(0);
    for(int i=0;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span=(s.empty())?i+1:i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}

int main(){
    int arr[]={10,20,30,40};
    int n=4;
    StockSpan(arr,n);
    return 0;
}
