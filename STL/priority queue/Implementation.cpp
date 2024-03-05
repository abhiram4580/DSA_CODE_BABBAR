#include<iostream>
#include<queue>
using namespace std;
// It uses minheap as its base.
int main(){
    priority_queue<int>pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    while(pq.empty()==false){
        cout<<pq.top()<<endl;
        pq.pop();

    }

    return 0;
}