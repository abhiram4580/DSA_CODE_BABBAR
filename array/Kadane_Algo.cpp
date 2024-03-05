#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n){
    int max_sum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=max(sum+arr[i],arr[i]);
        max_sum=max(sum,max_sum);
    }
    return max_sum;
    
}

int main(){
    int arr[]={1,-2,3,4,-5};
    int n=5;
    cout<<kadane(arr,n)<<endl;
    return 0;
}