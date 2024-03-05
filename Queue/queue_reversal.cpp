#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Reverse(queue<int>&q){
    stack<int>s;
    while(q.empty()==false){
        s.push(q.front());
        q.pop();

    }
    while(s.empty()==false){
        q.push(s.top());
        s.pop();
    }
    while(q.empty()==false){
        cout<<q.front()<<endl;
        q.pop();
    }

}


int main(){
    queue<int>q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    Reverse(q);
    return 0;
}