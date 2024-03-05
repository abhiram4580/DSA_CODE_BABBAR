#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
   int  left[n1];
   int  right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[low+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=a[mid+1+i];
    }

    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
    if(left[i]<=right[j]){
        a[k]=left[i];
        k++;
        i++;
    }
    else if(right[i]<=left[i]){
        a[k]=right[j];
        k++;
        j++;

    }
    }
    while(i<n1){
        a[k]=left[i];
        k++;
        i++;
    }
    while(j<n2){
        a[k]=right[j];
        k++;
        j++;
    }

}

void mergesort(int arr[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        Merge(arr,l,m,r);
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    int l=0;
    int r=4;
    mergesort(arr,l,r);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}