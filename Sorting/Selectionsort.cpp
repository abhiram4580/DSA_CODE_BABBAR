#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
            swap(arr[i],arr[min_idx]);
        }
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}