#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool Equlibrium(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
       sum=sum+arr[i];
    }
    int l_sum=0;
    for(int i=0;i<n;i++){
      if(l_sum==sum-arr[i]){
        return true;
      }  
      l_sum=l_sum+arr[i];
      sum=sum-arr[i];
    }
    return false;
}

int main(){
    int arr[]={1,2,3,4,6};
    int n=5;
    cout<<Equlibrium(arr,n)<<endl;
    return 0;
}