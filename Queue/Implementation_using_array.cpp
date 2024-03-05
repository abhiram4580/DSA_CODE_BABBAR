#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Myqueue {
    int size,cap;
    int *arr;
    Myqueue(int c){
        cap=c;
        size=0;
        arr=new int[cap];

    }

bool isFull(){
    return (size==cap);
}
bool isEmpty(){
    return (size==0);
}
void Enqueue(int x){
    if(isFull()){
        return;
    }
    arr[size]=x;
    size++;

}
void dequeue(){
    if(isEmpty()){
        return ;
    }
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
}
int getFront(){
    if(isEmpty()){
        return -1;
    }
    else{
        return arr[0];
    }
}
int getRear(){
    if(isEmpty()){
        return 0;
    }
    else{
       return arr[size-1];
    }
}
};

int main(){
    Myqueue q(10);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.dequeue();
    q.dequeue();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;

    return 0;
}

