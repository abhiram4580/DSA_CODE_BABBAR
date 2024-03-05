#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int *arr;
    int size;
    int capatcity;
    Heap(int c){
        arr=new int[c];
        size=0;
        capatcity=c;
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

void insert(Heap *h,int x){
    if(h->size==h->capatcity){
        return;
    }
    h->size++;
    h->arr[h->size-1]=x;
    int i=h->size-1;
    while(i!=0 && h->arr[parent(i)]>h->arr[i]){
        swap(h->arr[parent(i)],h->arr[i]);
        i=parent(i);
    }
}

int main(){
    Heap *h=new Heap(10);
    insert(h,10);
    insert(h,20);
    insert(h,30);
    insert(h,40);
    insert(h,50);
    insert(h,60);
    insert(h,70);
    insert(h,80);
    insert(h,90);
    insert(h,100);
    for(int i=0;i<h->size;i++){
        cout<<h->arr[i]<<" ";
    }
    return 0;
}