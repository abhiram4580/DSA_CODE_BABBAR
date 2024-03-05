#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq;
    pq.push(40);
    
    pq.push(20);
    pq.push(30);
    
    cout<<pq.top()<<endl;
    while(pq.empty()==false){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}