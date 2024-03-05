#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Mystack{
     int *arr;
     int cap;
     int top;
    Mystack(int c){
        cap=c;
        arr=new int[cap];
        top=-1;
    }


void push(int x){
    if(top==cap-1){
        cout<<"Stack overflow"<<endl;
    }
    top++;
    arr[top]=x;
    

}

int pop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
    }
    int res=arr[top];
    top--;
    return res;

}

int peek(){
    return arr[top];
}

int size(){
    return top+1;
}

bool isEmpty(){
    return (top==-1);
}
};

int main(){
    Mystack s(6);
    s.push(40);
    s.push(70);
    s.push(70);
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;


return 0;
}


