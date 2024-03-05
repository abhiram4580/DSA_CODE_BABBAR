#include<iostream>
#include<bits/stdc++.h>
using namespace std;

static void Insert(stack<int>s,int x){
    if(s.empty()==true){
        s.push(x);
        return ;
    }
    int y=s.top();
    s.pop();
    Insert(s,x);
    s.push(y);
}

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int x=9;
    Insert(s,x);
    while(s.empty()==false){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;

}