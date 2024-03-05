#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
   public:
      stack<int>s1;
      stack<int>s2;
    
    void push(int x){
        while(s1.empty()==false){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.empty()==false){
            s1.push(s2.top());
            s2.pop();
        }
    }
   
    int Pop(){
        if(s1.empty()==true){
            return -1;
        }
        int x=s1.top();
        s1.pop();
        return x;

    }


};

int main(){
    Queue q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int x=q.Pop();
    cout<<x<<endl;
    return 0;
}