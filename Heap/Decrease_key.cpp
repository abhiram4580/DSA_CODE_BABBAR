#include<bits/stdc++.h>
using namespace std;


class Heap{
    public:
    int *arr;
    int size;
    int capacity;
    Heap(int c){
        arr=new int [c];
        capacity=c;
        size=0;
    }
};


int left(int i){
    return 2*i+1;
}

int right(int i){
    return 2*i+2;
}

int parent(int i){
    return (i-1)/2;
}

void DecreaseKey(int i,int x,int arr[]){
    arr[i]=x;
    while(i!=0 && arr[parent(i)]>arr[i]){
        swap(arr[i],arr[parent(i)]);
        i=parent(i);
    }
}

int main(){
    int arr[]={10,20,40,80,100,70};
    int n=6;
    int i=3;
    int x=5;
    DecreaseKey(i,x,arr);  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }           
    return 0;               
}