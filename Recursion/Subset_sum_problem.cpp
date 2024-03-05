#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Countsubsets(int arr[],int n,int sum){
    if(n==0){
        return (sum==0)? 1:0;

    }
    return Countsubsets(arr,n-1,sum)+Countsubsets(arr,n-1,sum-arr[n-1]);
}

int main(){
    int arr[]={1,2,3,4};
    int n=4;
    int sum=1;
    int x=Countsubsets(arr,n,sum);
    cout<<x<<endl;

    return 0;
}