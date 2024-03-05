#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}