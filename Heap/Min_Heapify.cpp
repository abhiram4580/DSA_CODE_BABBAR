#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void MinHeapify(int arr[],int n,int i){
    int smallest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]<arr[smallest]){
        smallest=l;
    }
    if(r<n && arr[r]<arr[smallest]){
        smallest=r;
    }
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        MinHeapify(arr,n,smallest);
    }


}
void buildHeap(int arr[], int n)
{
    
    int startIdx = (n / 2) - 1;
 
    
    for (int i = startIdx; i >= 0; i--) {
        MinHeapify(arr, n, i);
    }
}

int main(){
    int arr[]={1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n=11;
    buildHeap(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
