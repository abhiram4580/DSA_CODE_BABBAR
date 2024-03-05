#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    priority_queue<int>pq(arr,arr+4);
    while(pq.empty()==false){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}