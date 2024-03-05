#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct MyStack{
   int *arr;
   int top1;
   int top2;
   int cap;
   MyStack(int c){
    cap=c;
    arr=new int[c];
    top1=-1;
    top2=cap;

   }

void Push1(int x){
    if(top1<top2-1){
        top1++;
        arr[top1]=x;
        
    }
}
void Push2(int x){
    if(top1<top2-1){
        top2--;
        arr[top2]=x;
    }
}

int Pop1(){
    if(top1>=0){
        int res=arr[top1];
        top1--;
        return res;
    }
    return -1;

}

int Pop2(){
    if(top2<cap){
        int res=arr[top2];
        top2++;
        return res;
    }
    return -1;
    
    }
};


int main(){
    MyStack s(4);
    s.Push1(3);
    s.Push2(4);
    s.Push1(5);
    cout<<s.Pop1()<<endl;
    cout<<s.Pop2()<<endl;
    return 0;

}