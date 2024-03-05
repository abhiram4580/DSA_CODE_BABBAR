#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int GetMin(int arr[],int n){
    sort(arr,arr+n);
    int res=INT_MAX;
    for(int i=1;i<n;i++){
        res=min(res,arr[i]-arr[i-1]);
    }
    return res;
}

int main(){
    int arr[]={5,4,3,5,2};
    int n=5;
    int z=GetMin(arr,n);
    cout<<z<<endl;
    return 0;
}