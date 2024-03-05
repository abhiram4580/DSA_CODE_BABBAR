#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int *arr;
    int size;
    int capacity;
    Heap(int c){
        arr=new int [c];
        size=0;
        capacity=c;
    }
};

int left(int i){
    return 2*i+1;
}
int right(int i){
    return 2*i+2;
}
int parent(int i){
    return (i-2)/2;
}

void MinHeapify(int i,int n,int arr[]){
    int lt=left(i);
    int rt=right(i);
    int smallest=i;
    if(lt<n && arr[lt]<arr[i]){
      smallest=lt;

    }
    if(rt<n && arr[rt]<arr[smallest]){
        smallest=rt;

    }
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        MinHeapify(smallest,n,arr);
    }
    
}

int main(){
    int arr[]={10,5,20,2,4,8};
    int n=6;
    for(int i=(n/2)-1;i>=0;i--){
        MinHeapify(i,n,arr);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}