#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintMax(int arr[],int n,int k){
    for(int i=0;i<n-k+1;i++){
        int mx=arr[i];
        for(int j=i+1;j<=i+k-1;j++){
            mx=max(arr[j],mx);
        }
        cout<<mx<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    int k=3;
    PrintMax(arr,n,k);
    return  0;
}

