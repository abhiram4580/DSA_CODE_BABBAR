#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void MaxSumK(int arr[],int n,int k){
    int curr_sum=0;
    for(int i=0;i<k;i++){
        curr_sum=curr_sum+arr[i];
    }
    int max_sum=curr_sum;
    for(int i=k;i<n;i++){
        curr_sum=curr_sum+arr[i]-arr[i-k];
        max_sum=max(curr_sum,max_sum);
   }
   cout<<max_sum<<endl;


    
}

int main(){
    int arr[]={1,2,3,4,5,-6};
    int n=6;
    int k=3;
    MaxSumK(arr,n,k);
    return 0;
}