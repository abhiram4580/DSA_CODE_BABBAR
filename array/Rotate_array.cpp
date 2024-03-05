#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Reverse(int start,int end,int arr[]){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


void Rotate(int arr[],int n,int k){
     Reverse(0,k-1,arr);
     Reverse(k,n-1,arr);
     Reverse(0,n-1,arr);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=1;
    Rotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}