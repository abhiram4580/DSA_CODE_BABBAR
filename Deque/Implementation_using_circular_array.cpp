#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct MyDeque{
    int *arr;
    int front;
    int cap;
    int size;
    MyDeque(int c){
        cap=c;
        front=0;
        size=0;
        arr=new int[c];

    }
bool IsEmpty(){
    return (size==0);
}
bool IsFull(){
    return(size==cap);
}
void DeleteFront(){
    if(IsEmpty()){
        return ;
    }
    front=(front+1)%cap;
    size--;
    
}
void InsertRear(int x){
    if(IsFull()){
        return;
    }
    int new_rear=(front+size)%cap;
    arr[new_rear]=x;
    size++;
}
int getFront(){
    if(IsEmpty()){
        return -1;
    }
    else{
        return front;
    }
}
int getRear(){
    if(IsEmpty()){
        return -1;
    }
    
}
};