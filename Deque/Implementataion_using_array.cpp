#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct MyDeque{
    int size;
    int cap;
    int *arr;
    MyDeque(int c){
        cap=c;
        arr=new int[c];
        size=0;
    }

 bool IsEmpty(){
    return (size==0);
 }
 bool IsFull(){
    return (size==cap);
 }
 void InsertRear(int x){
   if(IsFull()){
    return ;
   }
   arr[size]=x;
   size++;
 }
 void DeleteRear(){
    if(IsEmpty()){
        return;
    }
    size--;
 }
 int getRear(){
    if(IsEmpty()){
        return -1 ;
    }
    else{
        return arr[size-1];
    }
 }
 int getFront(){
    if(IsEmpty()){
        return -1;
    }
    else{
        return arr[0];
    }
 }
 void DeleteFront(){
    if(IsEmpty()){
        return;
    }
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
 }
 void InsertFront(int x){
    if(IsEmpty()){
        return ;
    }
    for(int i=size-1;i>=0;i--){
        arr[i+1]=arr[i];

    }
    arr[0]=x;
    size++;
    
 }
 int getSize(){
    if(IsEmpty()==true){
        return -1;
    }
    return size;
 }

 
  
};

int main(){
    MyDeque dq(40);
    dq.InsertFront(50);
    dq.InsertFront(60);
    dq.InsertRear(66);
    dq.InsertRear(56);
    dq.DeleteFront();
    cout<<dq.getFront()<<endl;
    cout<<dq.getRear()<<endl;
    cout<<dq.getSize()<<endl;
    

return 0;
}