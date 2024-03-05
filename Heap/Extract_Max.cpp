#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void MaxHeapify(int arr[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[largest]){
        largest=l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        MaxHeapify(arr,n,largest);
    }


}

int ExtractMax(int arr[],int n,int size){
  if(n==0){
    return 0;
  }
  if(n==1){
    return arr[0];
  }
  swap(arr[0],arr[n-1]);
  int x=arr[size-1];
  size--;
  MaxHeapify(arr,n,size);
  return x;
  

}

int main(){
    int arr[]={17,15 ,13, 9 ,6 ,5, 10, 4 ,8, 3 ,1 };
    int n=11;
    int x=ExtractMax(arr,n,11);
    cout<<x<<endl;
    return 0;
}