#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool Subarray(int arr[],int n,int sum){
    int curr_sum=arr[0];
    int start=0;
    for(int i=1;i<n;i++){
        while(curr_sum>sum && start<i-1){
            curr_sum=curr_sum-arr[start];
            start++;
        }
        if(i>n){
            curr_sum=curr_sum+arr[i];

        }
        if(curr_sum==sum){
           return true;
        }

    }
    return (curr_sum==sum);

}

int main(){
    int arr[]={1,2,4};
    int n=3;
    int sum=6;
    bool s=Subarray(arr,n,sum);
    cout<<s<<endl;
    return 0;

}