#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintDistinct(int arr[],int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            cout<<arr[i]<<endl;
            s.insert(arr[i]);
        }

    }
    
}

int main(){
    int arr[]={1,2,2,3,4,5};
    int n=6;
    PrintDistinct(arr,n);

    return 0;
}