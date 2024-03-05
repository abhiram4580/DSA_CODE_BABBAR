#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void MaxSum(int arr[],int n){
    int maxsum=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++){
        maxsum=max(maxsum+arr[i],arr[i]);
        res=max(res,maxsum);
    }

    cout<<res<<endl;
}

int main(){
    int arr[]={1,2,-3,4,5};
    int n=5;
    MaxSum(arr,n);
    return 0;
}