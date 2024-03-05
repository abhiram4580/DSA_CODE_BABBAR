#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct MyDq{
   deque<int>dq;
   void InsertMin(int x){
      dq.push_front(x);
   }
   void InsertMax(int x){
      dq.push_back(x);
   }
   int getmin(){
    return dq.front();
   }
   int getmax(){
    return dq.back();
   }
   int extractmin(){
    int res=dq.front();
    dq.pop_front();
    return res;
   }
   int extractmax(){
   int res=dq.back();
    dq.pop_back();
    return res;
   }



int main(){
    MyDq dq;
    InsertMax(20);
    InsertMin(2);
    int x=getmin();
    cout<<x<<endl;
    return 0;
    
}
};