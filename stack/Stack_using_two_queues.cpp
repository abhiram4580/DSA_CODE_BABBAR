#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Stack{
  queue<int>q1,q2;
  int top(){
    return q1.front();
  }
  int size(){
    return q1.size();
  }
  int pop(){
    int x=q1.front();
    q1.pop();
    return x;
  }
  
  void Push(int x){
    while(q1.empty()==false){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while(q2.empty()==false){
        q1.push(q1.front());
        q2.pop();
    }

  }


};

int main(){
    Stack s1;
    s1.Push(2);
    s1.Push(3);
    s1.Push(4);
    int x=s1.pop();
    cout<<x<<endl;
    return 0;
    



}