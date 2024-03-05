#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void deleteMid(stack<int>&s, int sizeOfStack)
    {
        
        int count=floor((sizeOfStack+1)/2);
        int count1=sizeOfStack-count;
        stack<int>temp;
        for(int i=0;i<count1;i++){
            temp.push(s.top());
            s.pop();
        }
        s.pop();
        while(temp.empty()==false){
            s.push(temp.top());
            temp.pop();
        }
        
        
    }


int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int n=s.size();
    deleteMid(s,n);
    while(s.empty()==false){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}