#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Dutch(int arr[],int n){
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            
            high--;
        }
    }
}

int main(){
    int arr[]={0,2,2,1,1,2};
    int n=6;
    Dutch(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}