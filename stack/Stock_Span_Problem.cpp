#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintSpan(int arr[],int n){
    stack<int>s;
    s.push(0);
    cout<<"1"<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span=s.empty()? i+1:i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}

int main(){
    int arr[]={3,4,3,21,3,54};
    int n=6;
    PrintSpan(arr,n);
    return 0;
}