#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Partition(int arr[],int low,int high){
    int i=low-1;
    int pivot=arr[high];
    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}


void QuickSort(int arr[],int low,int high){
    if(low<high){
        int k= Partition(arr,low,high);
        QuickSort(arr,low,k-1);
        QuickSort(arr,k+1,high);
    }

}

int main(){
   int arr[]={4,3,2,1,7,8};
   int n=6;
   int low=0;
   int high=5;
   QuickSort(arr,low,high);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<endl;
   }

   return 0;
}