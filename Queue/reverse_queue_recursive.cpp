#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintQueue(queue<int>q){
    while(q.empty()==false){
        cout<<q.front()<<endl;
        q.pop();
    }
}

void reverse(queue<int>q){
    if(q.empty()){
        return ;
    }
    int x=q.front();
    q.pop();
    reverse(q);
    q.push(x);
    
}



int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reverse(q);
    PrintQueue(q);
    return 0;
   
}