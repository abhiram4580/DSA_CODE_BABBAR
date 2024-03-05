#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PreviousGreater(int arr[],int n){
    stack<int>s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int prev=(s.empty())?-1:s.top();
        cout<<prev<<" ";
        s.push(arr[i]);

    }
}

int main(){
    int arr[]={1,4,5,4,5};
    int n=5;
    PreviousGreater(arr,n);
    return 0;
}