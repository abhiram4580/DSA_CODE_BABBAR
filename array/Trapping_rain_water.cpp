#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Trap(int arr[],int n){
     int leftmax[n],rightmax[n];
        leftmax[0]=arr[0];
        for(int i=1;i<n;i++){
            leftmax[i]=max(arr[i],leftmax[i-1]);
        }
        rightmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(arr[i],rightmax[i+1]);
        }
        long long  res=0;
        for(int i=1;i<n-1;i++){
            res=res+(min(leftmax[i],rightmax[i])-arr[i]);
        }
        return res;
}

int main(){
    int arr[]={2,1,3};
    
    int n=3;
    int z=Trap(arr,n);
    cout<<z<<endl;
    return 0;

}