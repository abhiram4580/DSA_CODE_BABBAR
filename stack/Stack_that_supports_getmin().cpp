#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void push(stack<int>&s,int x,stack<int>&as){
    if(s.empty()==true){
        s.push(x);
        as.push(x);
    }
    s.push(x);
    if(as.top()>=s.top()){
        as.push(x);
    }
}

int Pop(stack<int>&s,stack<int>&as){
    if(s.empty()==true){
        return -1;
    }
    if(as.top()==s.top()){
        as.pop();
    }
    int x=s.top();
    s.pop();
    return x;
}

int getMin(stack<int>&s,stack<int>&as){
    int x=s.top();
    s.pop();
    return x;
}


int main(){
    stack<int>ms;
    stack<int>as;
    push(ms,2,as);
    push(ms,3,as);
    push(ms,4,as);
    cout<<Pop(ms,as)<<endl;
    int x=getMin(ms,as);
    cout<<x<<endl;
    return 0;
}