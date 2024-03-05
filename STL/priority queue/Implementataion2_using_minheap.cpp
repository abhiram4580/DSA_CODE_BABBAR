#include<iostream>
#include<queue>
using namespace std;

int main(){
priority_queue<int,vector<int>,greater<int>>pq;
pq.push(20);
pq.push(30);
pq.push(40);
cout<<pq.size()<<endl;
while(pq.empty()==false)
{
    cout<<pq.top()<<endl;
    pq.pop();

}
return 0; 

}