#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
 
int PrefixSum(int arr[],int n){
    int Prefix[n];
    Prefix[0]=arr[0];

    for(int i=1;i<n;i++){
        Prefix[i]=Prefix[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<Prefix[i]<<endl;
    }

    return 0;
}

int main(){
    int arr[]={1,2,3,4};
    int n=4;
    PrefixSum(arr,n);
    return 0;
}